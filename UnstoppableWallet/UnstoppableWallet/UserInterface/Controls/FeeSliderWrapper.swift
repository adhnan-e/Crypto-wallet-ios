import UIKit
import HUD

class FeeSliderWrapper: UIView {
    private let slider = FeeSlider()
    private let minimumLabel = UILabel()
    private let maximumLabel = UILabel()

    private let feeRateView = FeeSliderValueView()
    private var sliderLastValue: Int?

    var finishTracking: ((Int) -> ())?

    var sliderRange: ClosedRange<Int> {
        Int(slider.minimumValue)...Int(slider.maximumValue)
    }

    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }

    required init() {
        super.init(frame: CGRect.zero)

        addSubview(slider)
        addSubview(minimumLabel)
        addSubview(maximumLabel)

        slider.snp.makeConstraints { maker in
            maker.top.bottom.equalToSuperview()
            maker.leading.equalTo(minimumLabel.snp.trailing).offset(CGFloat.margin2x)
            maker.trailing.equalTo(maximumLabel.snp.leading).offset(-CGFloat.margin2x)
        }
        slider.onTracking = { [weak self] value, position in
            self?.onTracking(value, position: position)
        }
        slider.finishTracking = { [weak self] value in
            self?.onFinishTracking(value)
        }
        slider.setContentCompressionResistancePriority(.defaultLow, for: .vertical)
        slider.setContentHuggingPriority(.defaultLow, for: .vertical)

        minimumLabel.snp.makeConstraints { maker in
            maker.leading.equalToSuperview()
            maker.centerY.equalTo(slider)
        }
        minimumLabel.textColor = .themeGray
        minimumLabel.font = .subhead2
        minimumLabel.text = "-"
        minimumLabel.setContentHuggingPriority(.defaultHigh, for: .horizontal)

        maximumLabel.snp.makeConstraints { maker in
            maker.trailing.equalToSuperview()
            maker.centerY.equalTo(slider)
        }
        maximumLabel.textColor = .themeGray
        maximumLabel.font = .subhead2
        maximumLabel.textAlignment = .right
        maximumLabel.text = "+"
        maximumLabel.setContentHuggingPriority(.defaultHigh, for: .horizontal)
    }

    func set(value: Int, range: ClosedRange<Int>, description: String?) {
        slider.minimumValue = Float(range.lowerBound)
        slider.maximumValue = Float(range.upperBound)
        slider.value = Float(value)

        feeRateView.set(descriptionText: description)
        sliderLastValue = value
    }

    private func hudConfig(position: CGPoint) -> HUDConfig {
        let hudWidth: CGFloat = 74
        var feeConfig = HUDConfig()

        feeConfig.appearStyle = .alphaAppear
        feeConfig.style = .banner(.top)
        feeConfig.absoluteInsetsValue = true
        feeConfig.userInteractionEnabled = true
        feeConfig.hapticType = .none
        feeConfig.blurEffectStyle = nil
        feeConfig.blurEffectIntensity = nil
        feeConfig.borderColor = .themeSteel20
        feeConfig.borderWidth = .heightOnePixel
        feeConfig.exactSize = true
        feeConfig.preferredSize = CGSize(width: hudWidth, height: 48)
        feeConfig.cornerRadius = CGFloat.cornerRadius2x
        feeConfig.handleKeyboard = .none
        feeConfig.inAnimationDuration = 0
        feeConfig.outAnimationDuration = 0

        let convertedPoint = convert(CGPoint(x: 0, y: -feeConfig.preferredSize.height - CGFloat.margin2x), to: nil)
        feeConfig.hudInset = CGPoint(x: position.x - center.x, y: convertedPoint.y)

        return feeConfig
    }

    private func onTracking(_ value: Int, position: CGPoint) {
        HUD.instance.config = hudConfig(position: position)

        feeRateView.set(value: "\(value)")
        HUD.instance.showHUD(feeRateView)
    }

    private func onFinishTracking(_ value: Int) {
        HUD.instance.hide()

        guard sliderLastValue != value else {
            return
        }
        sliderLastValue = value

        finishTracking?(value)
    }

}
