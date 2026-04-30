class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int ans = 0, left = 0;
        unordered_map<int, int> mp;
        unordered_set<int> st(nums.begin(), nums.end());
        int total = st.size();

        for (int right = 0; right < nums.size(); right++) {
            mp[nums[right]]++;

            while (mp.size() == total) {
                mp[nums[left]]--;
                if (mp[nums[left]] == 0) mp.erase(nums[left]);
                left++;
            }
            ans += left;
        }
        return ans;
    }
};