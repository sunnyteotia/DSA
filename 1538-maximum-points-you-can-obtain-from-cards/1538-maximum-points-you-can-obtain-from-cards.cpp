class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(auto pts:cardPoints){
            sum+=pts;
        }
        int answer=0;
        int n=cardPoints.size();
        int sumOfWindow=0;
        int l=0;
        for(int i=0;i<n;i++){
            if(i>=n-k){sumOfWindow-=cardPoints[l];l++;}
            sumOfWindow+=cardPoints[i];
            if(i>=n-k-1){
                cout<<sumOfWindow<<" "<<sum-sumOfWindow<<endl;
                answer=max(answer,sum-sumOfWindow);
            }
            
        }
        return answer;
    }
};