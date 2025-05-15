//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class sloution{
    public:
string removeDublicates(const string &s, int k){
    vector <pair<char, int>> st;
    for(char c:s){
        if(!st.empty() && st.back().first==c){
            st.back().second++;
            if(st.back().second ==k){
                st.pop_back();
            }

        }else{
            st.push_back({c,1});
        }
    }
    //not doublicated values shall store as string 
    string result;
    for(auto &p: st){
        result.append(p.second, p.first);
    }
    return result;

}
};
int main(){
sloution sol1;
cout<< sol1.removeDublicates("deeedbbccccbdaa", 2)<< endl;

return 0;
}