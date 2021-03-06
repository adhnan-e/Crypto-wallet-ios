import UIKit
import SnapKit

open class SingleLineValueDropdownCell: ThemeCell {
    private let leftView = SingleLineCellView()
    private let rightView = RightValueCellView()
    private let disclosureView = DropdownCellView()

    override public init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)

        contentView.addSubview(leftView)
        leftView.snp.makeConstraints { maker in
            maker.leading.top.bottom.equalToSuperview()
        }

        contentView.addSubview(rightView)
        rightView.snp.makeConstraints { maker in
            maker.top.bottom.equalToSuperview()
            maker.leading.equalTo(leftView.snp.trailing)
        }

        contentView.addSubview(disclosureView)
        disclosureView.snp.makeConstraints { maker in
            maker.top.trailing.bottom.equalToSuperview()
            maker.leading.equalTo(rightView.snp.trailing)
        }
    }

    required public init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    open func bind(title: String?, value: String?, last: Bool = false) {
        super.bind(last: last)

        leftView.bind(text: title)
        rightView.bind(text: value, highlighted: true)
    }

}
