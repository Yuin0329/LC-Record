
class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int k=0;
        for(int i=0;i<n;i++)
        {
            k^=(start+2*i);
        }
        return k;
    }
};
