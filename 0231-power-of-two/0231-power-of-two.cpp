class Solution {
public:
    bool isPowerOfTwo(int n) {
        float k= log2(n);
        if(k-log2(n)==0)
        {
            return true;
        }
        else return false;
    }
};