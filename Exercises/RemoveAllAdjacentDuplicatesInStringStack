//Remove All Adjacent Duplicates In String
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string returnNonDoublicate(const string& s){
    stack<char> result;
    for(char c:s){
        if(!result.empty() && result.top()==c){
            result.pop();
        }else{
            result.push(c);
        }

        }
        string finalResult;
        while(!result.empty()){
            finalResult += result.top();
            result.pop();
        }
        reverse(finalResult.begin(),finalResult.end());

        return finalResult;
    }
int main(){
    string s = "abbaca";
    cout<<returnNonDoublicate(s)<<endl;

    return 0;
}