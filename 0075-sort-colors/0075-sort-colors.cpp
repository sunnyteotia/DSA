class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(auto num:nums){
            m[num]++;
        }
        int k=0;
        for(auto i:m){
            while(i.second!=0){
                 nums[k]=i.first;k++;i.second--;
            }
           
        }
    }
};