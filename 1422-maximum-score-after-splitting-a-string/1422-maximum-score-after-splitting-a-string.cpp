class Solution {
public:
    int maxScore(string s) {
        int right1=ranges::count(s,'1');
        int left0=0;
        int ans=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {left0++;}
            else
            {right1--;}
            ans=max(ans,left0+right1);
        }
        return ans;
    }
};