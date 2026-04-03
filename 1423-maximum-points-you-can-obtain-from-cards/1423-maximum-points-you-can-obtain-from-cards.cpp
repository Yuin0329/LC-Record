class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,ans=0,n=cardPoints.size()-1;
        for (int i = 0; i < k; i++) 
        {
            sum += cardPoints[i];
        }

        ans=sum;

        for(int i=0 ; i<k ; i++)
        {
            sum-=cardPoints[k-i-1];
            sum+=cardPoints[n-i];
            ans=max(ans,sum);
        }
        return ans;
    }
};