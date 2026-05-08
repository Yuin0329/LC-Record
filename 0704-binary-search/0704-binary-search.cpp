class Solution {
int lower_bound(vector<int>& nums, int target) {
     int left=-1,right=nums.size();
     while(left+1<right){
        int mid=left+(right-left)/2;
        if(nums[mid]>=target) right=mid;
        else left=mid;
        }   
    return right;
    }
public:
    int search(vector<int>& nums, int target) {
        int ans=lower_bound(nums,target);
        if(ans < nums.size() && nums[ans]==target) return ans;
        else  return {-1};
    }
};