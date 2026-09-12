class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        map<vector<int>,vector<string>> mpp;

        for(auto word:strs){
            vector<int>key(26,0);
            for(auto ch:word){
                key[ch-'a']++;
            }
            mpp[key].push_back(word);
        }


        for(auto [key,value]:mpp){
            ans.push_back(value);
        }


        return ans;
    }
};
