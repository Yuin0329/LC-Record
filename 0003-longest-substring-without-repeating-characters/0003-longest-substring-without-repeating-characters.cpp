class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int left=0,ans=0;
     unordered_map<char,int> mp;
     //vector<char> ans;
     for(int i=0;i<s.size();i++ )
     {
        mp[s[i]]++;
        while(mp[s[i]] > 1)
        {
            mp[s[left]]--;
            left++;
        }
        ans=max(ans,i-left+1);

     }   
     return ans;
    }
};