class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0,sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int left=i-k+1;
            sum+=arr[i];
            if(left<0) continue;
            if(sum>=k*threshold) ans++;
            sum-=arr[left];
        }
        return ans;
    }
};