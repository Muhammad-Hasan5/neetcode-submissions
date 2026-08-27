class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        for(auto t : tokens){
            if(t == "+" or t == "-" or t == "*" or t == "/"){
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();
                if(t == "+"){
                    s.push(num2 + num1);
                } else if (t == "-") {
                    s.push(num2 - num1);
                } else if (t == "*") {
                    s.push(num2 * num1);
                } else {
                    s.push(num2 / num1);
                }
            }else{
                s.push(stoi(t));
            }
        }

        return s.top();
    }
};
