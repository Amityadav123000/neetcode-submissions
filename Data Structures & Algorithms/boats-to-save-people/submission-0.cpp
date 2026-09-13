class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int res=0;
        int l=0;
        int r=people.size()-1;

        while(l<=r){
            int sum=0;
            sum+=people[r];
            r--;
            res++;
            if(limit-sum >= people[l]){
                l++;
            }
        }

        return res;
    }
};