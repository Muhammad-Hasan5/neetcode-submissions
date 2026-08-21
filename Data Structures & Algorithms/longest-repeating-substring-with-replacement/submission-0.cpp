class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int L = 0, res = 0, maxf = 0;

        for(int R = 0; R < s.size(); R++){
            freq[s[R]]++;
            maxf = max(maxf, freq[s[R]]);

            while((R - L + 1) - maxf > k){
                freq[s[L]]--;
                L++;
            }

            res = max(res, (R - L + 1));
        }

        return res;
    }
};
