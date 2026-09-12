class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0,currSum=0;
        //[currSum,count]
        unordered_map<int,int> prefixSum;
        prefixSum[0]=1;

        for(int num:nums){
            currSum+=num;
            int diff=currSum-k;
            res+=prefixSum[diff];
            prefixSum[currSum]++;    
        }

        return res;

    }
};