class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> res;
        for(const auto & num : nums){
            res[num]++;
        }
        for(auto & pair : res){
            if(pair.second > floor(nums.size()/2)){
                return pair.first;
            }
        }
    }
};