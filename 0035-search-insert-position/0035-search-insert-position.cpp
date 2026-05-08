class Solution {
int lowerbound(vector<int>& nums, int target){
    int left=-1,right=nums.size();
    while(left+1<right){
        int mid=left+(right-left)/2;
        if(nums[mid]>=target) right=mid;
        else left=mid;
    }
    return right;
};

public:
    int searchInsert(vector<int>& nums, int target) {
        return lowerbound(nums,target);
    }
};