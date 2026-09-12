class Solution {
public:

    vector<vector<int>> direction={{-1,0},{1,0},{0,-1},{0,1}};

    int solve(vector<vector<int>>& matrix,int r,int c,int prev){
        int R=matrix.size();
        int C=matrix[0].size();

        if(r<0 || r>=R || c<0 || c>=C || matrix[r][c] <= prev) return 0;

        int res=1;

        for(auto dir:direction){
            res=max(res,1+solve(matrix,r+dir[0],c+dir[1],matrix[r][c]));
        }

        return res;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int R=matrix.size();
        int C=matrix[0].size();
        int LIP=0;

        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                LIP=max(LIP,solve(matrix,r,c,INT_MIN));
            }
        }

        return LIP;
    }
};
