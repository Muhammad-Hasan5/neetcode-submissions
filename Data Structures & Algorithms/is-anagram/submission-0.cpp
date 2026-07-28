class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
        }

        unordered_map<char, int> s1;
        unordered_map<char, int> t1;

        auto stringLength = s.length();

        for (int i=0; i<stringLength; i++) {
            s1[s[i]]++;
            t1[t[i]]++;
        }

        if (s1 != t1) return false;

        return true;
        }
};
