class Solution {
public:
    int fib(int n) {

        int ans;
        if(n>=0)
        {
          ans=(1/sqrt(5))*(pow((1+sqrt(5))/2,n)-(pow((1-sqrt(5))/2,n))) ;
        }
        return ans;
    }
};