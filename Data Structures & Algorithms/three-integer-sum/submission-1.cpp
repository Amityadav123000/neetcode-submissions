class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<nums.size();i++){
            int num1=nums[i];
            int l=i+1;
            int r=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(l<r){
                int num2=nums[l];
                int num3=nums[r];
                int sum=num1+num2+num3;
                vector<int>temp;
                if(sum==0){
                    temp.push_back(num1);
                    temp.push_back(num2);
                    temp.push_back(num3);
                    ans.push_back(temp);

                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r]==nums[r-1]) r--; 

                    l++;
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
        }

        return ans;
    }
};
