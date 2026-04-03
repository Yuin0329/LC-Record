class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
         vector<int> avgs(nums.size(),-1); 
         double sum=0;        
         for(int i=0;i<nums.size();i++)
         {
            if(k==0)
            {
                avgs[i]=nums[i];
                continue;
            } 
            int left=i-2*k;
            sum+=nums[i];
            if(left<0 ) 
            {
             avgs[i]=-1;   
             continue;
            }
            avgs[i-k]=floor(sum/(2*k+1));
            sum-=nums[left];      
         }
         return avgs;
    }
};