class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        int  n=prizePositions.size();
        if(prizePositions[n-1]-prizePositions[0]<2*k) return n;
        int ans=0,left=0,right=0,mx=0;
        for(int mid=0;mid<n;mid++){
            while(right<n && prizePositions[right]-prizePositions[mid]<=k){
                right++;
            }
            ans=max(ans,mx+right-mid);
            while(prizePositions[mid]-prizePositions[left]>k){
                left++;
            }
            mx=max(mx,mid-left+1);
        }
        
        return ans;
    }
};