class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char, int> mp;
        int ans = 0, left = 0, n = s.size();

        for (int right = 0; right < n; right++) {
            mp[s[right]]++;

            while (mp[s[right]] >= k) {
                ans += n - right;
                mp[s[left]]--;
                left++;
            }
        }

        return ans;
    }
};