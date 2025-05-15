//Remove All Adjacent Duplicates In String
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string returnNonDoublicate(const string& s){
    string result;
    for(char c:s){
        if(!result.empty() && result.back()==c){
            result.pop_back();
        }else{
            result.push_back(c);
        }

        }
        return result;
    }
int main(){
    string s = "abbaca";
    cout<<returnNonDoublicate(s)<<endl;

    return 0;
}