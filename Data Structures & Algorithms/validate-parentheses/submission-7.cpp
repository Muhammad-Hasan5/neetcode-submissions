class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        for(auto ch : s){
            if(ch == '(' or ch == '[' or ch == '{'){
                c.push(ch);
            } else if(ch == ')' or ch == ']' or ch == '}'){
                if(c.empty()) return false;
                if(ch == ')' and c.top() == '(' and !c.empty()){
                    c.pop();
                } else if(ch == ']' and c.top() == '[' and !c.empty()) {
                    c.pop();
                } else if(ch == '}' and c.top() == '{' and !c.empty()) {
                    c.pop();
                } else {
                    return false;
                }
            }
            
        }

        return c.empty();
    }
};
