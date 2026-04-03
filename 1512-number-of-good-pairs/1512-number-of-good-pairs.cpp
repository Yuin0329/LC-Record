class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int k=0;
        unordered_map<int,int> cnt;
        for(int x:nums)
        {
            k+=cnt[x];
            cnt[x]++;
        }
        return k;
    }
};
