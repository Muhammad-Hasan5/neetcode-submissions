class Solution {
public:
    int partition(vector<int>& nums, int l, int h){
        int pivot = nums[l];
        int i=l-1, j=h+1;

        while(true){
            do{i++;}while(nums[i] < pivot);
            do{j--;}while(nums[j] > pivot);
            if(i >= j) return j;
            const int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    void quicksort(vector<int>& nums, int l, int h){
        if(l < h){
            int j = partition(nums, l, h);
            quicksort(nums, l, j);
            quicksort(nums, j+1, h);
        }
    }
    void sortColors(vector<int>& nums) {
        quicksort(nums, 0, nums.size()-1);
    }
};