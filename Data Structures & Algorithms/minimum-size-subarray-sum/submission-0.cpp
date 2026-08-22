class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int L = 0, R = 0;
        vector<int> res;

        while(L < nums.size()){
            int sum = 0;
            while(R < nums.size()){
                sum += nums[R];
                if(sum >= target){
                    res.push_back((R - L + 1));
                    break;
                }
                R++;
            }
            L++;
            R = L;
        }

        auto minV = min_element(res.begin(), res.end());

        if(minV != res.end()) return *minV;

        return 0;
    }
};