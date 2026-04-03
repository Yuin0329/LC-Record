class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0,left=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[left]]--;
                left++;
                continue;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};