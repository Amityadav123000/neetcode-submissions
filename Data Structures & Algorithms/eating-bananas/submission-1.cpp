class Solution {
public:

    bool possible(vector<int>& piles, int mid,int h){
        long long actualHours=0;

        for(auto &x:piles){
            actualHours+=x/mid;
            if(x%mid!=0) actualHours++;
        }

        return actualHours<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=0;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(piles,mid,h)){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }       
        return ans;
    }
};