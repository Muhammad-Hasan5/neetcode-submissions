class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(), 0);
        stack<pair<int, int>> s;

        for(int i = 0; i<temp.size(); i++){
            int t = temp[i];
            while(!s.empty() and t > s.top().first){
                auto pair = s.top();
                s.pop();
                res[pair.second] = i - pair.second;
            }
            s.push({t, i});
        }

        return res;
    }
};
