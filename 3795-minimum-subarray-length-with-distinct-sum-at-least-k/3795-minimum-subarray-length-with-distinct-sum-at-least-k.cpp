class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int ans=1e5,left=0,n=nums.size(),sum=0;
        unordered_map<int,int> mp;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            if(mp[nums[right]]==1) sum+=nums[right];

        while(sum>=k){
            ans=min(ans,right-left+1);
            mp[nums[left]]--;
            if(mp[nums[left]]==0) sum-=nums[left];
            left++;
            }
        }
        if(ans==1e5) ans=-1;
        return ans;
    }
};