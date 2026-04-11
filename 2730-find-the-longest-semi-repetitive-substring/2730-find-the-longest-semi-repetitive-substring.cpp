class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int ans=0,left=0,n=s.size(),cnt0=0,cnt1=0;

        for(int right=0;right<n;right++){
            if(right>0 && s[right-1]==s[right]) cnt0++;
            while(cnt0>1){
                if(s[left]==s[left+1]) cnt0--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};