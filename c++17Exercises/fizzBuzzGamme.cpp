#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void fizzBuzz(int n) {
    std::vector<std::string> result;
    result.reserve(n);  // 🚀 Memory Optimization: Avoids reallocation

    std::cout << "[";  // Start of output format

    for (int i = 1; i <= n; ++i) {
        std::ostringstream oss;  // 🚀 Efficient string concatenation

        if (i % 3 == 0) oss << "Fizz";  // Append "Fizz" if divisible by 3
        if (i % 5 == 0) oss << "Buzz";  // Append "Buzz" if divisible by 5
        
        // 🚀 If no Fizz/Buzz, store the number
        std::string value = oss.str().empty() ? std::to_string(i) : oss.str();
        result.emplace_back(value);

        std::cout << "\"" << value << "\"";  // Print each element in format
        if (i != n) std::cout << ",";  // Add comma for all but last element
    }

    std::cout << "]" << std::endl;  // End of output format
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    fizzBuzz(n);  // ✅ Directly calls function without separate return

    return 0;
}
