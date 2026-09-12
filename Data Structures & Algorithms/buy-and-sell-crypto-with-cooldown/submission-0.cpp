class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+2,vector<int>(2,0));

        for(int i=n-1;i>=0;i--){
            for(int buying=1;buying>=0;buying--){
                int cooldown=dp[i+1][buying];
                if(buying){
                    int buy=dp[i+1][false] - prices[i];
                    dp[i][1] = max(buy,cooldown);            
                }else{
                    int sell=dp[i+2][true] + prices[i];
                    dp[i][0] = max(sell,cooldown);
                }
            }
        }
        return dp[0][1];
    }
};
