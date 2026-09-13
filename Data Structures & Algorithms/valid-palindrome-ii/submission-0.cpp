class Solution {
public:
    bool checkPal(string s){
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }else{
                l++;
                r--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        if(checkPal(s)){
            return true;
        }

        for(int i=0;i<s.size();i++){
            string newS=s.substr(0,i) + s.substr(i+1);
            if(checkPal(newS)){
                return true;
            }
        }
        return false;
    }
};