class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> windows;
        int L = 0;

        for(int R = 0; R < nums.size(); R++){
            if(R - L > k) {
                windows.erase(nums[L]);
                L++;
            }
            if(windows.count(nums[R])){
                return true;
            }
            windows.insert(nums[R]);
        }

        return false;
    }
};