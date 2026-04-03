class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0,vowel=0;
        for(int i=0;i<s.size();i++)
        {
            int left=i-k+1;
            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowel++;
            }
            
            if(left<0)
            {
                continue;
            }

            ans=max(ans,vowel);
            if (ans == k) {
                break; 
            }
            
            if(s[left]=='a' || s[left]=='e' ||s[left]=='i' ||s[left]=='o' ||s[left]=='u')
            {
                vowel--;
            }
        }
        return ans;
    }
};