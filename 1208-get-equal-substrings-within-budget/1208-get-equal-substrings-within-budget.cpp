class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans=0,left=0,cost=0;
        for(int right=0;right< s.size();right++){
            cost+=abs(s[right] - t[right]);
            while(cost>maxCost){
               cost-=abs(s[left] - t[left]);
               left++;   
                          
            }
            ans=max(ans,right-left+1);

        }
        return ans;
    }
};