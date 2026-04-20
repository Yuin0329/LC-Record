class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0, left = 0;
        int cnt[3]{};
        for (char c : s) {
            cnt[c - 'a']++;
            while (cnt[0] && cnt[1] && cnt[2]) {
                cnt[s[left] - 'a']--;
                left++;
            }
            ans += left;
        }
        return ans;
    }
};
