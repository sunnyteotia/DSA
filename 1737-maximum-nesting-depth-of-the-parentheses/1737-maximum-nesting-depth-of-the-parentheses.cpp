class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int maxi=0;
        for(auto ch:s){
            if(ch=='(')st.push(ch);
            int size=st.size();
            maxi=max(size,maxi);
            if(ch==')')st.pop();

        }
        return maxi;
    }
};