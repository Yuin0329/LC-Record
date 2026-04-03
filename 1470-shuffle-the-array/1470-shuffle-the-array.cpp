class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i=0;i<n;i++)
        {
            ans[2*i]=nums[i];
        }
        for(int i=n; i<2*n;i++)
        {
            ans[2*(i-n)+1]=nums[i];
        }
        return ans;

    }
};