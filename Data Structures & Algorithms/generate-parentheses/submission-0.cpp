class Solution {
public:
    void backtrack(int openN,int closeN,int n,vector<string> &res,string &st){
        if(openN==closeN && openN==n){
            res.push_back(st);
            return;
        }

        if(openN<n){
            st+='(';
            backtrack(openN+1,closeN,n,res,st);
            st.pop_back();
        }

        if(closeN<openN){
            st+=')';
            backtrack(openN,closeN+1,n,res,st);
            st.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string st;
        backtrack(0,0,n,res,st);
        return res;
    }
};
