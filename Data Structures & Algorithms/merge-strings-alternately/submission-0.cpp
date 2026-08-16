class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        string res = "";
        while(true){
            if(i < word1.size()){ 
                res += word1[i];
                i++;
            }

            if(j < word2.size()){
                res += word2[j];
                j++;
            }

            if(res.size() == (word1.size() + word2.size())){
                break;
            }     
        }
        return res;
    }
};