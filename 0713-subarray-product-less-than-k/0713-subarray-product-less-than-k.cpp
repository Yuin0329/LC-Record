class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0,n=nums.size(),cnt=0;
        for(int left=0;left<n;left++ ){
            long long int pd=1 ;
            for(int right=left;right<n;right++ ){               
            pd*=nums[right];
            if(pd<k) cnt++;
            else break;
            }
        }
        return cnt;
    }
};