class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        if(haystack.empty()){
            return -1;
        }
        if(haystack==needle){
            return 0;
        }
        return haystack.find(needle);
    }
};
