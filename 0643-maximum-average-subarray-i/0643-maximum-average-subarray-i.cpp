class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = -1e6, sum = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            int left = i - k + 1;
            sum += nums[i];
            if (left < 0) continue;

            ans = max(ans, sum);
            sum -= nums[left];
        }
        return ans / k;
    }
};