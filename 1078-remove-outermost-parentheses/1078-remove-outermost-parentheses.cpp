class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int c=0;
        for(auto ch:s){
            if(ch=='(' && c==0){
                c++;continue;
            }
            else if(ch=='('&& c!=0){
                c++;
                ans+=ch;
            }
            else if(ch==')' && c!=1){
                c--;
                ans+=ch;
            }
            else{
                c--;continue;
            }
        }
        return ans;
    }
};