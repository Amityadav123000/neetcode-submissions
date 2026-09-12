class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mpp;

        for(auto num:nums){
            mpp[num]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto[key,value]:mpp){
            pq.push({value,key});
        }

        while(k--){
            auto [key,value]=pq.top();
            ans.push_back(value);
            pq.pop();
        }

        return ans;

    }
};
