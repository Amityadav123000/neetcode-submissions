class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        stack<int> st;
        for(auto ops:operations){
            if(ops!="+" && ops!="D" && ops!="C"){
                st.push(stoi(ops));
            }

            if(ops=="+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int sum=top1+top2;
                st.push(top2);
                st.push(top1);
                st.push(sum);
            }
            if(ops=="D"){
                int sum=st.top()*2;
                st.push(sum);
            }
            if(ops=="C"){
                st.pop();
            }

        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }



        return ans;
    }
};