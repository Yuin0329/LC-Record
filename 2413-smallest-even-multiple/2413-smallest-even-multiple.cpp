class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) //原本給我直接寫mod(n) ==
        {
            return n;
        }
        else  
        {
            return 2*n;
        }
          }
};
