#include <iostream>
#include <optional>
//Iterating based on optional values
std::optional<int> getValue(bool condition) {
    if (condition) return 10;  // Return a valid value
    return std::nullopt;      // No value
}

int main() {
    if (auto value = getValue(true)) {  // Check if value exists
        for (int i = 0; i < *value; ++i) {
            std::cout << "Iteration: " << i << std::endl;
        }
    }

    return 0;
}
