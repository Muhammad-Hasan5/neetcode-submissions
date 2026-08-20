class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int L = 0;
        int res = 0;
        for(int R = 0; R < s.size(); R++){
            while(charSet.find(s[R]) != charSet.end()){
                charSet.erase(s[L]);
                L++;
            }
            charSet.insert(s[R]);
            res = max(res, R - L + 1);
        }
        return res;
    }
};
