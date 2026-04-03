class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
    vector<double> ans(2);
    double k=celsius+273.15;
    double f=celsius*1.80+32.00;
    ans[0]=k;
    ans[1]=f;
    return(ans);
    }
};