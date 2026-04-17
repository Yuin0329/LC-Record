class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int cnt1=0,n=s.size(),left=0;
        for(int right=0;right<n;right++){
            if(s[right]=='1') cnt1++;

            while(cnt1>k){
                if(s[left]=='1') cnt1--;
                left++;
            }
            while(cnt1==k && s[left]=='0') { left++;}
            if(cnt1==k){
               string cur=s.substr(left,right-left+1);
               if (ans == "" || cur.size() < ans.size() || (cur.size() == ans.size() && cur < ans)) ans = cur;
            }

        }
        return ans;
    }
};