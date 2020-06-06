class Solution {
public:
    int reverse(int x) {
        
        long reversed = 0;
        while(x!=0){
            int d = x%10;
            reversed = reversed*10 + d;
            x = x/10;
            cout<<d<<" "<<reversed<<" ";
        }
        return (int)reversed==reversed ? (int)reversed : 0;
    }
};
