class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long XOR=0;
        int n=nums.size();
        for(auto num:nums){
            XOR=XOR^num;
        }
        int rightmost=(XOR&(XOR-1))^XOR;
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            if( nums[i] & rightmost){
                xor1=xor1^nums[i];
            }
            else{
               xor2=xor2^nums[i]; 
            }
        }
        return {xor1,xor2};
    }
};