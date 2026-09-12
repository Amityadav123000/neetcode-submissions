class Solution {
public:
    int dfs(int n,int i){
        if(i>=n) return i==n;
        return (dfs(n,i+1) + dfs(n,i+2));
    }

    int climbStairs(int n) {
        return dfs(n,0);
    }
};
