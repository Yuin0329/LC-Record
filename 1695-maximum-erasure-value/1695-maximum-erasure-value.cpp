class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
           int ans=0,left=0,n=nums.size(),sum=0;
           unordered_map<int,int> mp;
           for(int right=0;right<n;right++){
                mp[nums[right]]++;
                sum+=nums[right];
                while(mp[nums[right]]>1){
                    mp[nums[left]]--;
                    sum-=nums[left];
                    left++;
                }
                ans=max(ans,sum);
           }
           return ans;
    }
};