import UIKit

struct RestoreWordsModule {

    static func viewController(restoreView: RestoreView, restoreAccountType: RestoreAccountType) -> UIViewController {
        let service = RestoreWordsService(restoreAccountType: restoreAccountType, wordsManager: App.shared.wordsManager, appConfigProvider: App.shared.appConfigProvider)
        let viewModel = RestoreWordsViewModel(service: service)
        return RestoreWordsViewController(restoreView: restoreView, viewModel: viewModel)
    }

    enum RestoreAccountType {
        case mnemonic(wordsCount: Int)
    }

}
