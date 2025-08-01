class Solution {
    vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}
public:
    int lengthOfLastWord(string s) {
        int ans=0,index=-1;
        int n=s.size();
        int lInd=0;
        for(int i=0;i<s.size();i++){
            if(i<n-1 && s[i]==' ' && s[i+1]!=' '){
                index=i;
            }
            if(s[i]!=' '){
                lInd=i;
            }
        }
        return lInd-index;
    }
};