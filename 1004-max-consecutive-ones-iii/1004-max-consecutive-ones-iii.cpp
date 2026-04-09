class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0,left=0,n=nums.size(),cnt0=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0) cnt0++;
            while(cnt0>k){
                if(nums[left]==0) cnt0--;
                left++;

            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};