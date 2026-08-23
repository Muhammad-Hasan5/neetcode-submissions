class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int L = 0, R = arr.size() - 1;

        while(R - L >= k){
            if(abs(x - arr[L]) <= abs(x - arr[R])){
                R--;
            } else {
                L++;
            }
        }

        return vector<int>(arr.begin() + L, arr.begin() + R + 1);
    }
};