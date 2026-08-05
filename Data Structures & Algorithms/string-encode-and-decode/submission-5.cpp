class Solution {
public:
    string encode(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string res = "";
        for(auto s: strs){
            res = res + to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        if(s == "") {
            return {};
        }
        vector<string> res;
        int i=0;
        while(i < s.size()){
            int j=i;
            while(s[j] != '#') j++;
            int len = stoi(s.substr(i, j-i));
            res.push_back(s.substr(j+1, len));
            i = 1 + j + len;
        }
        return res;
    }
};
