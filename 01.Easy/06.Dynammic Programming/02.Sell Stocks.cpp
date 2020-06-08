class Solution {
public:
    int maxProfit(vector<int>& v){
        int n = v.size();
        vector<int> dp(v);
        int profit = 0;
        for(int i=1;i<n;i++){
            if(dp[i]>dp[i-1]){
                profit = max(profit,dp[i] - dp[i-1]);
            }
            dp[i] = min(dp[i],dp[i-1]);
        }
        return profit;
    }
};
