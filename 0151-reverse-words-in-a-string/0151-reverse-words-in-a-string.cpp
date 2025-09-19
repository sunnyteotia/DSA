class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        vector<string>ans;
        for(auto ch:s){
            if(ch==' '){
                if(temp!=" " && temp!="")
                ans.push_back(temp);
                cout<<temp<<endl;
                temp="";
            }
            else{
                temp+=ch;
            }
        }
        if(temp!=" " && temp!="")
        ans.push_back(temp);
        reverse(ans.begin(),ans.end());
        string res="";
        // cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            res+=ans[i];
            if(i!=ans.size()-1)
            res+=" ";
        }
        return res;
    }
};