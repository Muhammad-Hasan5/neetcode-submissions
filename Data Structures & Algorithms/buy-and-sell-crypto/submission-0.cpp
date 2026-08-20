class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L = 0;
        int maxP = 0;

        for(int R = 1; R < prices.size(); R++){
            if(prices[R] < prices[L]){
                L = R;
            } else {
                maxP = max(maxP, prices[R] - prices[L]);
            }
        }
        return maxP;
    }
};
