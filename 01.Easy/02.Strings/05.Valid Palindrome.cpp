class Solution {
public:
    bool isAlphaNumeric(char s){
        if((s>='a' && s<='z') || (s>='A' && s<='Z') || (s>='0' && s<='9')){
            return true;
        }
        return false;
    }
    
    bool isPalindrome(string s){
        if(!s.length()){
            return true;
        }
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while(i<j){
            if(!isAlphaNumeric(s[i])){
                i++;
                continue;
            }
            if(!isAlphaNumeric(s[j])){
                j--;
                continue;
            }
            s[i] = (s[i]>='A' && s[i]<='Z') ? s[i] - 'A' + 'a' : s[i];
            s[j] = (s[j]>='A' && s[j]<='Z') ? s[j] - 'A' + 'a' : s[j];
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
