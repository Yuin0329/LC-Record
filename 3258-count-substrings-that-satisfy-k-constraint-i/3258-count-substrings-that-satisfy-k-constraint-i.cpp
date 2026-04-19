class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int cnt0=0,cnt1=0,ans=0,n=s.size(),left=0;
        for(int right=0;right<n;right++){
           if(s[right]=='0') cnt0++;
           if(s[right]=='1') cnt1++;
           while(cnt0>k && cnt1>k){
           if(s[left]=='0') cnt0--;
           if(s[left]=='1') cnt1--;
            left++;
           }
           ans+=right-left+1;
        } 
        return ans;
    }
};