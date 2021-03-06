enum PredefinedAccountType: CaseIterable {
    case standard
    case binance
    case eos

    var title: String {
        switch self {
        case .standard: return "Standard"
        case .binance: return "Binance"
        case .eos: return "EOS"
        }
    }

    var coinCodes: String {
        switch self {
        case .standard: return "BTC, ETH, LTC, BCH, DASH, ERC20 tokens"
        case .binance: return "BNB, BEP2 tokens"
        case .eos: return "EOS, EOSIO tokens"
        }
    }

    func supports(accountType: AccountType) -> Bool {
        switch self {
        case .standard:
            if case let .mnemonic(words, _) = accountType {
                return words.count == 12
            }
        case .binance:
            if case let .mnemonic(words, _) = accountType {
                return words.count == 24
            }
        case .eos:
            if case .eos = accountType {
                return true
            }
        }

        return false
    }

    var createSupported: Bool {
        switch self {
        case .standard, .binance: return true
        case .eos: return false
        }
    }

}

extension PredefinedAccountType: Hashable {

    public func hash(into hasher: inout Hasher) {
        switch self {
        case .standard: hasher.combine("standard")
        case .binance: hasher.combine("binance")
        case .eos: hasher.combine("eos")
        }
    }

}
