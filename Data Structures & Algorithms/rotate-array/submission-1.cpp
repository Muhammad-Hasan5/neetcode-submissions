class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
         while(k > 0){
            int f = nums.size() - 1;
            int s = f - 1;
            int temp = nums[f];
            while(s >= 0){
                nums[f--] = nums[s--];
            }
            nums[0] = temp;
            k--;
         }
         */

         reverse(begin(nums), end(nums));
         int n = nums.size();
         k = k%n;
         reverse(nums.begin(), nums.begin() + k);
         reverse(nums.begin() + k, nums.end());
    }
};