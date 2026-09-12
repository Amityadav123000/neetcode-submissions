class Solution {
public:

    int dfs(string &t1,string &t2,int i,int j){
        if(i==t1.size() || j==t2.size()) return 0;

        if(t1[i]==t2[j]) return (1+dfs(t1,t2,i+1,j+1));

        return max(dfs(t1,t2,i+1,j),dfs(t1,t2,i,j+1));
    }

    int longestCommonSubsequence(string t1, string t2) {
        vector<vector<int>> dp(t1.size()+1,vector<int>(t2.size()+1));

        for(int i=t1.size()-1;i>=0;i--){
            for(int j=t2.size()-1;j>=0;j--){
                if(t1[i]==t2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }else{
                    dp[i][j]=max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }

        return dp[0][0];
    }
};
