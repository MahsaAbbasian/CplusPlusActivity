#include <iostream>
#include <string>
#include <string_view>

int lengthOfLastWord(std::string_view s) {
//remove Space
size_t end =s.find_last_not_of(' ');
if(end==std::string_view::npos) 
    return 0;
//find_start
size_t start =s.find_last_of(' ',end);
return (start == std::string_view::npos)? end+1 : end-start;
}
int main(){
    std::cout<< lengthOfLastWord("hello world")<< std::endl;
    std::cout<< lengthOfLastWord("   fly me   to   the moon  ")<< std::endl;
    std::cout<< lengthOfLastWord("luffy is still joyboy")<<std::endl;
    return 0;
}