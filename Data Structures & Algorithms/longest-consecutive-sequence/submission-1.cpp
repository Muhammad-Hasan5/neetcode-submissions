class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(begin(nums), end(nums));
        int longest = 0;

        for(auto n: nums){
            if(numSet.count(n-1) == 0){
                int length = 0;
                while(numSet.count(n + length)){
                    length += 1;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
