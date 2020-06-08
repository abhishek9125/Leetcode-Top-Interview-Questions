class Solution {
public:
    int climbStairs(int n) {
        int *dp = new int[n+1];
        if(n==1){
            return 1;
        }
        memset(dp,0,sizeof(dp));
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        for(int i=0;i<=n;i++){
            cout<<dp[i]<<" ";
        }
        return dp[n];
    }
};
