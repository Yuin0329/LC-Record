class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
     int ans=0,left=0,tcnt=0,fcnt=0,n=answerKey.size();
     for(int right=0;right<n;right++){
        if(answerKey[right]=='T') tcnt++;
        else fcnt++;

        while(min(tcnt,fcnt)>k){
            if(answerKey[left]=='T') tcnt--;
            else fcnt--;
            left++;
        }
        ans=max(ans,right-left+1);
     }
     return ans;
    }
};