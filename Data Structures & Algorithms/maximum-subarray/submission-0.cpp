class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS=nums[0];
        int currSum=0;

        for(auto num:nums){
            if(currSum<0) currSum=0;

            currSum+=num;
            maxS=max(maxS,currSum);
        }
        return maxS;
    }
};
