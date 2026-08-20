class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> score;
        int res = 0;

        for(const string &op : ops){
            if(op == "+"){
                int top = score.top();
                score.pop();
                int newTop = top + score.top();
                score.push(top);
                score.push(newTop);
                res += newTop;
            } else if(op == "D"){
                score.push(2 * score.top());
                res += score.top();
            } else if(op == "C"){
                res -= score.top();
                score.pop();
            } else {
                score.push(stoi(op));
                res += score.top();
            }
        }
        return res;
    }
};