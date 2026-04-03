class Solution {
public:
    string toLowerCase(string s) {
        for(char &x:s)
        {
            if('A'<=x && x<='Z' )
            {
                x=x+32;
            }
        }
        return s;
    }
};