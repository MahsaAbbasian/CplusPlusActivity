
#include <iostream>
#include <string>
#include <cctype> // for std::tolower and std::isalnum

bool isPalindromeRecursionFunction(const std::string& str, int left, int right) {
    if (left >= right) {
        return true; // Base case: crossed or met
    }
    if (str[left] != str[right]) {
        return false ; // Base case: mismatch
    }
return isPalindromeRecursionFunction(str, left +1, right -1); // Recur inward

};
bool isPalindrome(const std::string& str) {
    return isPalindromeRecursionFunction(str,0,str.length()-1);
}

int main() {
    std::string str;
    std::cout << "Enter your word" << std::endl;
    std::getline(std::cin, str);

    if(isPalindrome(str)) {
        std::cout << str << " is a palindrome" << std::endl;
    } else {
        std::cout << str << " is not a palindrome" << std::endl;
    }
    return 0;
}