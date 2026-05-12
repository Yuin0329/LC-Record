class Solution {
int lower_bound(vector<int>& nums,int target){
    int left=-1,right=nums.size();
        while(left+1 < right){
            int mid=left+(right-left)/2;
            if(nums[mid]>=target) right=mid;
            else left=mid;
        }
        return right;
}

public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int neg = lower_bound(nums, 0); // 第一個 >= 0 的位置 = 負數數量
        int pos = n - lower_bound(nums, 1); // 第一個 >= 1 的位置後面都是正數
        if(nums[0] >0 || nums[n-1] <0 ) return n;
        return max(neg,pos);
        
}

};