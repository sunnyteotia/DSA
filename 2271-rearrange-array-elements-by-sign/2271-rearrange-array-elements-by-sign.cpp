class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        for(auto num:nums){
            if(num>=0)a.push_back(num);
            else{
                b.push_back(num);
            }
        }
        int i=0,j=0;
        vector<int>ans;
        while(i<a.size() || j<b.size()){
            if(i<=j){
                ans.push_back(a[i]);
            i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        return ans;
    }
};