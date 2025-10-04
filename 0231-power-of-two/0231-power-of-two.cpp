class Solution {
public:
    bool isPowerOfTwo(int n) {
       while(n!=0){
        int bit=n%2;
        n/=2;
        if(n==0 && bit==1)return true;
        if(n!=0 && bit==1)return false;
       }
       return false;
    }
};