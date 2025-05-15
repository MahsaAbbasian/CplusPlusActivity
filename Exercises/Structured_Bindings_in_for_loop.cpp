#include <map>
#include <iostream>

int main() {
    std::map<int, std::string> data = {{1, {"One"}}, {2, "Two"}, {3, "Three"}};
//Iterating over key-value pairs (e.g., maps)
    for (const auto& [key, value] : data) {
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }

    return 0;
}