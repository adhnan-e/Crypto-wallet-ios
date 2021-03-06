import LanguageKit

class ThemeKit {

    static var bundle: Bundle? {
        Bundle(for: ThemeKit.self).url(forResource: "ThemeKit", withExtension: "bundle").flatMap { Bundle(url: $0) }
    }

    static func image(named: String) -> UIImage? {
        UIImage(named: named, in: bundle, compatibleWith: nil)
    }

}

extension String {

    var localized: String {
        LanguageManager.shared.localize(string: self, bundle: ThemeKit.bundle)
    }

    func localized(_ arguments: CVarArg...) -> String {
        LanguageManager.shared.localize(string: self, bundle: ThemeKit.bundle, arguments: arguments)
    }

}
