//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
//150. Evaluate Reverse Polish Notation

#include <iostream>
#include <vector>
#include <stack>
#include <string>

class Slution {

public:
    int evaluationg(std::vector<std::string>& tokens){
        std::stack<int> st;

        for(const auto& token : tokens){
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int val1 = st.top();
                st.pop();

                int val2 =st.top();
                st.pop();

                if(token == "+") st.push(val1 + val2);
                if(token == "-") st.push(val1 - val2);
                if(token == "*") st.push(val1 * val2);
                if(token == "/") st.push(val1 / val2);

            }else{
            st.push(std::stoi(token));
            }
        }
        return st.top();
}

};
int main() {
    Slution sol;
    std::vector<std::string>tokens1 = {"2","1","+","3","*"};
    std::cout << "Output: " << sol.evaluationg(tokens1) <<std::endl;

    std::vector<std::string>tokens2 = {"4","13","5","/","+"};
    std::cout << "Output: " << sol.evaluationg(tokens2) <<std::endl;

    std::vector<std::string> tokens3 = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    std::cout << "Output: " << sol.evalRPN(tokens3) << std::endl;  // Output: 22

    return 0;
}