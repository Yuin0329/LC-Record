class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sufMin(n);
        sufMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            sufMin[i] = min(sufMin[i + 1], nums[i]);
        }

        int preMax = nums[0];
        for (int i = 0; i < n; i++) {
            preMax = max(preMax, nums[i]);
            if (preMax - sufMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};