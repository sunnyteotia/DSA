class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int n=c.size();
        // if(n==1 && c[0]==0)return 0;
         int maxi=0;
//   for(auto j:c){
//     if(j>0)maxi=1;
//   }
       
       vector<int>ans(c.size(),0);
       for(int i=n-1;i>=0;i--){
        if(c[i]>maxi){
            maxi++;
        }
       }
       return maxi;
    }
};