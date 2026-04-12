class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int ans=0,left=0,n=nums.size();
        ranges::sort(nums);
        for(int right=0;right<n;right++){
            while(abs(nums[right]-nums[left])>2*k){
                left++;}
            ans=max(ans,right-left+1);
        }
        return ans;

    }
};