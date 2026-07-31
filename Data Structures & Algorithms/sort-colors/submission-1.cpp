class Solution {
public:
    void sortColors(vector<int>& nums) {
        int max_val = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > max_val){
                max_val = nums[i];
            }
        }

        vector<int> hash(max_val+1, 0);
        for(auto num:nums){
            hash[num]++;
        }

        int index=0;
        for(int i=0; i<hash.size(); i++){
            while(hash[i]-- > 0){
                nums[index++] = i;
            }
        }
    }
};