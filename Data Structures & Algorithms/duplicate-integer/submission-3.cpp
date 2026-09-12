class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for(auto num:nums){
            if(unique.count(num)){
                return true;
            }
            unique.insert(num);
        }
        return false;
    }
};