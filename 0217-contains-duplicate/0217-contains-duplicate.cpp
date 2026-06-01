class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        ranges::sort(nums);
        bool ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if( mp[nums[i]]>1){
                ans=1;
                break;
            }
        } 
        return ans;
    }
};