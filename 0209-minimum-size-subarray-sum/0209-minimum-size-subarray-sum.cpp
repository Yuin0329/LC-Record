class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=1e9,left=0,n=nums.size(),sum=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            
            while(sum>=target){
                ans=min(ans,right-left+1);
                sum-=nums[left];
                left++;
                //ans=min(ans,right-left+1);
            }

            
            
        }
        if(ans==1e9) ans=0;
        return ans;
    }
};