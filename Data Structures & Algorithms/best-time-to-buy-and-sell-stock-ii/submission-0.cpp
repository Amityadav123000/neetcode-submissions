class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;

        for(int i=0;i<n-1;i++){
            int profit=prices[i+1]-prices[i];
            ans=max(ans+profit,ans);
        }

        return ans;
    }
};