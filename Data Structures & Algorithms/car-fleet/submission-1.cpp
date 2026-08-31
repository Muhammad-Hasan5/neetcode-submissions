class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> sp;

        for(int i=0; i<speed.size(); i++){
            sp.push_back({position[i], speed[i]});
        }

        sort(sp.begin(), sp.end(), greater<pair<int, int>>());

        vector<double> res;

        for(auto& p : sp){
            res.push_back((double)(target - p.first) / p.second);
            if(res.size() >= 2 && res.back() <= res[res.size() - 2]){
                res.pop_back();
            }
        }

        return res.size();
    }
};
