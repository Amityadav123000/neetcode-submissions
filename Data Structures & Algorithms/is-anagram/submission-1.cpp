class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;

        for(auto ch:s){
            map[ch]++;
        }

        for(auto ch:t){
            map[ch]--;
            if(map[ch]==0){
                map.erase(ch);
            }
        }

        if(!map.empty()){
            return false;
        }

        return true;
    }
};
