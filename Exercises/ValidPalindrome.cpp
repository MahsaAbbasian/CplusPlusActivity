#include <iostream>
#include <vector>   // ✅ Ensure this is included
#include <string>   // ✅ Required for std::string
#include <cctype>   // ✅ Required for character operations

using namespace std;

bool isPalindrome(const string& s) {
    vector<char> clean;  // ✅ Ensure vector is correctly recognized

    for (char check : s) {
        if (isalnum(check)) {
            clean.push_back(tolower(check));
        }
    }

    int left = 0, right = clean.size() - 1;
    while (left < right) {
        if (clean[left] != clean[right]) {
            return false;
        }
        left++;
        right--;
    }

    cout << "Is Palindrome" << endl;
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << boolalpha << isPalindrome(s) << endl;

    return 0;
}
