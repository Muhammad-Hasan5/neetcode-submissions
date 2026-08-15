class Solution {
public:
    bool isPalindrome(string s) {
        string pal = "";

        for(auto ch: s){
            if(
                (ch >= 'a' && ch <= 'z') || 
                (ch >= 'A' && ch <= 'Z') || 
                (ch >= '0' && ch <= '9')
            ) {
                pal += tolower(ch);
            }
        }

        int i = 0;
        int j = pal.size() - 1;
        while(i < pal.size() / 2 and j >= pal.size() / 2){
            if(pal[i] != pal[j]){ 
                return false;
            };
            i++;
            j--;
        }
        return true;
    }
};
