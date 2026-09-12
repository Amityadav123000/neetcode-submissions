class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROW=matrix.size();
        int COL=matrix[0].size();
        int l=0;
        int r=ROW*COL -1;
        while(l<=r){
            int m=l+(r-l)/2;

            if(target > matrix[m/COL][m%COL]){
                l=m+1;
            }else if(target < matrix[m/COL][m%COL]){
                r=m-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
