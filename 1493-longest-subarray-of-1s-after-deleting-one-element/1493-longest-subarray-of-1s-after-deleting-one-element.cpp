class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,left=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>=2 && nums[i]==0)
            {
                mp[nums[left]]--;
                left++;
            }
            ans=max(ans,i-left);
            
        }
        return ans;
    }
};