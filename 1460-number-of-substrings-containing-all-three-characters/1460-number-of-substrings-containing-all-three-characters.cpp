class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        map<int,int>m;
        int count=0;
        for(int r=0;r<s.size();r++){
            m[s[r]-'a']++;
            while(m[0]>0 && m[1]>0 && m[2]>0){
                count+=(s.size()-r);
                m[s[l]-'a']--;
                l++;
            }
        }
        return count;
    }
};