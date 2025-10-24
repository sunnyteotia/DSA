class Solution {
    int helper(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int l=0;
        int count=0;
        int sum=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            if(sum>goal){
                while(sum>goal){
                    sum-=nums[l];l++;
                }
            }
            count+=(r-l+1);
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return helper(nums,goal)-helper(nums,goal-1);
    }
};