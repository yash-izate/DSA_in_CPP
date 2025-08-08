#include <iostream>
#include <iterator>      // std::size
#include <tuple>         // structured bindings
#include <optional>      // std::optional
#include <filesystem>    // filesystem library
using namespace std;
namespace fs = std::filesystem;

// Function that might return a value
optional<int> findValue(bool found) {
    if (found) return 42;
    return {}; // empty optional
}

int main() {
    // 1. std::size()
    int arr[4] = {10, 20, 30, 40};
    cout << "Array size: " << std::size(arr) << "\n\n";

    // 2. Structured bindings
    auto [a, b] = make_pair(5, 15);
    cout << "Structured bindings: a = " << a << ", b = " << b << "\n\n";

    // 3. if constexpr
    auto printType = [](auto x) {
        if constexpr (is_integral_v<decltype(x)>)
            cout << x << " is an integer\n";
        else
            cout << x << " is not an integer\n";
    };
    printType(42);
    printType(3.14);
    cout << "\n";

    // 4. std::optional
    auto val = findValue(true);
    if (val) cout << "Optional value found: " << *val << "\n\n";

    // 5. Filesystem iteration
    cout << "Files in current directory:\n";
    for (auto &p : fs::directory_iterator(".")) {
        cout << "  " << p.path().filename().string() << "\n";
    }
}
