class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>ng;
      vector<int>res;
      stack<int>st;
      for(auto num:nums2){
        while(!st.empty() && st.top()<num){
            ng[st.top()]=num;st.pop();
        }
        st.push(num);
      }
        for(auto num:nums1){
            if(ng.count(num)>0){
                res.push_back(ng[num]);
            }else{
                res.push_back(-1);
            }
        }
        return res;
    }
};