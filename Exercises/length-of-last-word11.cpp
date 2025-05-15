#include <iostream>
#include <string>
#include <string_view>

int lengthOfLastWord(const std::string& s) {
int end=s.length()-1;
while(end >= 0 && s[end] ==' ') 
--end;
if(end<0)
return 0;
int start = end;
while(start>=0 && s[start] !=' ')
--start;

return end-start;
}
int main(){
    std::cout<< lengthOfLastWord("hello world")<< std::endl;
    std::cout<< lengthOfLastWord("   fly me   to   the moon  ")<< std::endl;
    std::cout<< lengthOfLastWord("luffy is still joyboy")<<std::endl;
    return 0;
}std::string& reverseString(std::string& s) {
    size_t left = 0, right = s.size() - 1;
    
    while (left < right) {
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
    
    return s; // Return modified string (same reference)
}