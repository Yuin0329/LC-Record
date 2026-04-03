class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> x(nums.size());
        x[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int y=nums[i-1]+nums[i] ;
            x[i]=y;
            nums[i]=y; //哈哈

        }
            
        return{x};
    }

};