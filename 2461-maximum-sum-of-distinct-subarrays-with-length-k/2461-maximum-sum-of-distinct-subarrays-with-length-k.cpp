class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int left=i-k+1;
            mp[nums[i]]++;
            sum+=nums[i];
            if(left<0) continue;
            if(mp.size()==k)
            {
                ans=max(ans,sum);
            }
            sum-=nums[left];
            mp[nums[left]]--;
            if (mp[nums[left]] == 0) 
            {
                mp.erase(nums[left]); //Notice
            }
        }
        return ans;
    }
};