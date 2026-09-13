class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0;
        int r=heights.size()-1;

        while(l<r){
            int result=min(heights[l],heights[r])*(r-l);
            ans=max(ans,result);
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return ans;
    }
};
