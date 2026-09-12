class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];

        for (int k=1;k<strs.size();k++){
            string newWord=strs[k];
            int i=0;
            int j=0;

            while(i<ans.size() && j<newWord.size()){
                if(ans[i]==newWord[j]){
                    i++;
                    j++;        
                }else{
                    ans.erase(i);
                    break;
                }
            }

            if(j<ans.size()){
                ans.erase(j);
            }

        }    


        return ans;
    }
};