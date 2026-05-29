class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp=0,ans=0;
        int row = accounts.size();        // row 數量
        int col = accounts[0].size();     // column 數量
        for(int i=0;i < row ;i++){
            temp=0;
            for(int j=0; j < col;j++) {
              temp+=accounts[i][j];  
              ans=max(ans,temp);
            }
             
        }
        return ans;
    }
};