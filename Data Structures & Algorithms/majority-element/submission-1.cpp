class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        unordered_map<int, int> res;
        for(const auto & num : nums){
            res[num]++;
        }
        for(auto & pair : res){
            if(pair.second > floor(nums.size()/2)){
                return pair.first;
            }
        }
        */
        int count = 0, res = 0;
        for(auto num: nums){
            if(count == 0) res = num;
            count += res == num ? 1 : -1;
        }
        return res;
    }
};