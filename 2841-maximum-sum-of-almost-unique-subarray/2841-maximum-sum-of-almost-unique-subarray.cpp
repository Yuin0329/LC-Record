class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
      long long ans=0,sum=0;
      unordered_map<int,int> mp;

      for(int i=0;i<nums.size();i++)
      {
        int left=i-k+1;
        sum+=nums[i];
        mp[nums[i]]++;
        if(left<0) continue;
        if(mp.size()>=m) ans=max(ans,sum);
        mp[nums[left]]--;
        if(mp[nums[left]]==0) mp.erase(nums[left]);
        sum-=nums[left];
      }
      return ans;          
    }
};