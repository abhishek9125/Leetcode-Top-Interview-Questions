class Solution {
public:
    int value(char c){
        if(c=='I'){
            return 1;
        }
        if(c=='V'){
            return 5;
        }
        if(c=='X'){
            return 10;
        }
        if(c=='L'){
            return 50;
        }
        if(c=='C'){
            return 100;
        }
        if(c=='D'){
            return 500;
        }
        if(c=='M'){
            return 1000;
        }
        return 0;
    }
    
    int romanToInt(string s){
        int number = 0;
        for(int i=0;i<s.size();i++){
            if(value(s[i+1])>value(s[i])){
                number = number - value(s[i]);
            }
            else{
                number = number + value(s[i]);
            }
        }
        return number;
    }
    
};
