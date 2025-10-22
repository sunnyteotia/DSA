class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int maxi=0;
        int zero=0;
        map<int,int>m;
        int n=nums.size();
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0)zero++;
            if(zero>k){
                if(nums[l]==0)zero--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};