class Solution {
public:
    bool isDigit(char a){
        if(a>='0' && a<='9'){
            return true;
        }
        return false;
    }
    
    int myAtoi(string str) {
        int i=0;
        int sign = 1;
        while(str[i]==' '){
            i++;
        }
        if(str[i]=='-'){
            sign = -1;
            i++;
        }
        else if(str[i]=='+'){
            i++;
        }
        long long n = 0;
        while(i<str.size() && isDigit(str[i]) && n<INT_MAX){
            n = n*10 + (str[i] - '0');
            i++;
        }
        n = n*sign;
        if(n<INT_MIN){
            return INT_MIN;
        }
        if(n>INT_MAX){
            return INT_MAX;
        }
        return n;
    }
};
