class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(),s.end());
        map<char,int>m;
        for(auto ch:s){
            m[ch]++;
        } 
        priority_queue<pair<int,char>>q;
        for(auto it:m){
            q.push({it.second,it.first});
        }
        string ans="";
        while(!q.empty()){
            int size=q.top().first;
            char ch=q.top().second;
            for(int i=0;i<size;i++){
                ans+=ch;
            }
            q.pop();
        }
        return ans;
            }
};