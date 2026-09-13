class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int res=0;
        int l=0;
        int r=n-1;
        while(l<=r){
            if(l==r){
                res++;
                break;
            }
            int sum=people[l]+people[r];
            if(sum<=limit){
                l++;
                r--;
            }else{
                r--;
            }
            res++;
        }


        return res;
    }
};