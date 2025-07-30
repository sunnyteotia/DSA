class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int n=gas.size();
       int sumGas=0,sumCost=0,gasRemain=0;int start=0;
    for(int i=0;i<n;i++){
        sumGas+=gas[i];
    }
    for(int i=0;i<n;i++){
        sumCost+=cost[i];
    }
    if(sumGas<sumCost)
    return -1;
    for(int i=0;i<n;i++){
        gasRemain+=(gas[i]-cost[i]);
        if(gasRemain<0){
        gasRemain=0;
        start=i+1;
        }
    }
    return start;  
    }
};