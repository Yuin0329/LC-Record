class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool ans=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        return mp.size()<nums.size();
    }
};