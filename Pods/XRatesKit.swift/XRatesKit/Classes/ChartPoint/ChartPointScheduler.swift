import RxSwift
import HsToolKit

class ChartPointScheduler {
    private let provider: IChartPointSchedulerProvider
    private let reachabilityManager: IReachabilityManager
    private var logger: Logger?

    private let disposeBag = DisposeBag()
    private var timerDisposable: Disposable?

    private var syncInProgress = false

    init(provider: IChartPointSchedulerProvider, reachabilityManager: IReachabilityManager, logger: Logger? = nil) {
        self.provider = provider
        self.reachabilityManager = reachabilityManager
        self.logger = logger

        reachabilityManager.reachabilityObservable
                .subscribeOn(ConcurrentDispatchQueueScheduler(qos: .utility))
                .subscribe(onNext: { [weak self] reachable in
                    if reachable {
                        self?.autoSchedule()
                    }
                })
                .disposed(by: disposeBag)
    }

    deinit {
        logger?.debug("CHART: Deinit: \(provider.logKey)")
    }

    private func autoSchedule(minDelay: TimeInterval = 0) {
        var delay: TimeInterval = 0

        if let lastSyncTimestamp = provider.lastSyncTimestamp {
            let currentTimestamp = Date().timeIntervalSince1970
            let diff = currentTimestamp - lastSyncTimestamp
            delay = max(0, provider.expirationInterval - diff)
        }

        schedule(delay: max(minDelay, delay))
    }

    private func schedule(delay: TimeInterval) {
        let intDelay = Int(delay.rounded(.up))

        logger?.debug("CHART: \(provider.logKey): Schedule: delay: \(intDelay) sec")

        // invalidate previous timer if exists
        timerDisposable?.dispose()

        // schedule new timer
        timerDisposable = Observable<Int>
                .timer(.seconds(intDelay), scheduler: ConcurrentDispatchQueueScheduler(qos: .background))
                .subscribe(onNext: { [weak self] _ in
                    self?.sync()
                })

        timerDisposable?.disposed(by: disposeBag)
    }

    private func sync() {
        // check if sync process is already running
        guard !syncInProgress else {
            logger?.debug("CHART: \(provider.logKey): Sync already running")
            return
        }

        logger?.debug("CHART: \(provider.logKey): Sync started")

        syncInProgress = true

        provider.syncSingle
                .subscribe(onSuccess: { [weak self] in
                    self?.onSyncSuccess()
                }, onError: { [weak self] error in
                    self?.onSync(error: error)
                })
                .disposed(by: disposeBag)
    }

    private func onSyncSuccess() {
        logger?.debug("CHART: \(provider.logKey): Sync success")

        syncInProgress = false
        autoSchedule(minDelay: provider.retryInterval)
    }

    private func onSync(error: Error) {
        logger?.debug("CHART: \(provider.logKey): Sync error: \(error)")

        syncInProgress = false
        schedule(delay: provider.retryInterval)
    }

}

extension ChartPointScheduler: IChartPointsScheduler {

    func schedule() {
        logger?.debug("CHART: \(provider.logKey): Schedule")

        DispatchQueue.global(qos: .utility).async {
            self.autoSchedule()
        }
    }

}
