class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=1,sum2=0;
        while(n>=1)
        {
            sum=sum*(n%10);
            sum2=sum2+n%10;
            n=n/10;
        }
        n=sum-sum2;
        return n;
    }
};