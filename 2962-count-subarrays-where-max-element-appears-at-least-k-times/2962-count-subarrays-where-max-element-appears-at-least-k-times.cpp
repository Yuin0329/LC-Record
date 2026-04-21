class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0,left=0,n=nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        unordered_map<int,int> mp;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp[mx]>=k){
                if(nums[left]==mx) mp[mx]--; 
                left++;
            }
            ans+=left;
        }
        return ans;
    }
};