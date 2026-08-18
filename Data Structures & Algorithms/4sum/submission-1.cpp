class Solution {
public:
    void ksum(vector<int>& nums, vector<int>& quad,               vector<vector<int>>& res, int start, int count, long long sum, int target){
       if(count == 4){
        if(sum == target){
            res.push_back(quad);
        }
        return;
       }
       for(int i = start; i<nums.size(); i++){
        if(i > start && nums[i] == nums[i-1]){
            continue;
        }

        quad.push_back(nums[i]);

        ksum(nums, quad, res, i + 1, count + 1, sum + nums[i], target);
        quad.pop_back();
       }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> quad;

        ksum(nums, quad, res, 0, 0, 0, target);

        return res;
    }
};