#include <iostream>
#include <vector>
#include <string>

std::string fizBuzCheck(const std::vector<std::string>& str) { 
    if (str.empty()) 
        return ""; // If no strings, return empty

    for (size_t i = 0; i < str.size(); i++) { 
        int num = std::stoi(str[i]);
        if (num % 3 == 0 && num % 5 == 0) {
            return "FizzBuzz";
        } else if (num % 3 == 0) {
            return "Fizz";
        } else if (num % 5 == 0) {
            return "Buzz";
        }
    }
    return ""; 
}

int main() {
    std::vector<std::string> strs1 = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"};
    std::cout << "Longest Common Prefix: " << fizBuzCheck(strs1) << std::endl;

    return 0;
}