class Solution {
int lowerbound(vector<int>& nums, int target){
    int left=-1,right=nums.size();
    while(left+1<right){
    int mid=left+(right-left)/2;
    if(nums[mid]>=target) right=mid;
    else left=mid;
    }
    return right;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=lowerbound(nums,target);
        if(start==nums.size()||nums[start]!=target) return {-1,-1};
        int end=lowerbound(nums,target+1)-1;
        return {start,end};
    }
};