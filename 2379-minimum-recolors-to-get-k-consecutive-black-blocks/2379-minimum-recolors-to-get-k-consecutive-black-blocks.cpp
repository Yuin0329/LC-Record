class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
     int cnt=0,ans=100;
     for(int i=0;i<blocks.size();i++)
     {
         int left=i-k+1;
         if(blocks[i]=='W')
         {
            cnt++;
         }
         if(left<0) continue;
         ans=min(cnt,ans);
         if(blocks[left]=='W')
         {
            cnt--;
         }
     }
     return ans;
    }
};
