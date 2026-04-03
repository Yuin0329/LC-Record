class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        ranges::sort(nums);
        int ans = 0, left = 0, n = nums.size();

        for (int right = 0; right < n; right++) {
            while (1LL * nums[left] * k < nums[right]) {
                left++;
            }
            ans = max(ans, right - left + 1);
        }

        return n - ans;
    }
};