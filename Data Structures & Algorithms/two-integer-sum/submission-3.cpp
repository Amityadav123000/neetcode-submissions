class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int remain=target-nums[i];
            if(mpp.find(remain)!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[remain]);
                reverse(ans.begin(),ans.end());
            }
            mpp[nums[i]]=i;

        }

        return ans;

    }
};
