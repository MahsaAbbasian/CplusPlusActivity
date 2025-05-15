#include <iostream>
#include <vector>
#include <string>

std::string fizBuzCheck(const std::vector<std::string>& strs) { 
    if (strs.empty()) 
        return ""; // If no strings, return empty

    for (size_t i = 0; i < strs[i].length(); i++) { 

            if (str[i]%3== 0) {
                Str[i]=="Fizz"
            }
            f (str[i]%5== 0) {
                Str[i]=="Buz"
            }
           
            }
        }
    return strs; 
}

int main() {
    std::vector<std::string> strs1 = ["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"];
    std::cout << "Longest Common Prefix: " << fizBuzCheck(strs1) << std::endl;

    return 0;
}  f (str[i]%3== 0 && str[i]%5== 0) {
                Str[i]=="FizzBuzz"