class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[l] + nums[r] == target) {
                ans.push_back(l);
                ans.push_back(r);
                return ans;
            };
            if(nums[l] + nums[r] > target) r--;
            else l++;
        }
        return {};
    }
};
