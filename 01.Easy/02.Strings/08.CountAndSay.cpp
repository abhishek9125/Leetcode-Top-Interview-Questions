class Solution {
public:
    string countString(string& s){
        string output;
        int count = 1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                output.append(to_string(count));
                output.push_back(s[i-1]);
                count = 1;
            }
        }
        output.append(to_string(count));
        output.push_back(s.back());
        return output;
    }
    
    string countAndSay(int n) {
        if(n==0 || n>30){
            return "";
        }
        if(n==1){
            return "1";
        }
        string output = "11";
        for(int i=2;i<n;i++){
            output = countString(output);
        }
        return output;
    }
};
