class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        unordered_map<int,int> mp;
        vector<bool> removed(arrivals.size(), false);
        int ans = 0;

        for (int i = 0; i < arrivals.size(); i++) {
            int left = i - w;

            if (left >= 0 && !removed[left]) {
                mp[arrivals[left]]--;
            }

            if (mp[arrivals[i]] < m) {
                mp[arrivals[i]]++;
            } else {
                removed[i] = true;
                ans++;
            }
        }

        return ans;
    }
};
