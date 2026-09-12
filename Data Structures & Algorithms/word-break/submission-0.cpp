class Solution {
public:

    bool dfs(string &s,vector<string>& wordDict,int i){
        if(i==s.length()) return true;

        for(auto w:wordDict){
            if(i+w.length() <= s.length() && s.substr(i,w.length())==w){
                if(dfs(s,wordDict,i+w.length())) return true;
            }
        }
        return false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool> dp(n+1,false);
        dp[n]=true;
        for(int i=n-1;i>=0;i--){
            for(auto w:wordDict){
                if(i+w.size()<=n && s.substr(i,w.length())==w){
                    dp[i]=dp[i+w.length()];
                }
                if(dp[i]==true) break;
            }
        }
        return dp[0];
    }
};
