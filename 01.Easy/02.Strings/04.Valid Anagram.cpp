class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length()!=t.length()){
            return false;
        }
        map<char,int> m1,m2;
        for(auto i:s){
            m1[i]++;
        }
        for(auto i:t){
            m2[i]++;
        }
        for(int i=0;i<128;i++){
            if(m1[i]!=m2[i]){
                return false;
            }
        }
        return true;
    }
};
