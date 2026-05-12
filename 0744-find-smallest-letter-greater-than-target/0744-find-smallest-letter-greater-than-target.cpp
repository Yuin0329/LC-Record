class Solution {
int lower_bound(vector<char>& letters, char target){
    int left=-1,right=letters.size();
    while(left+1 < right){
        int mid=left+(right-left)/2;
        if(letters[mid] > target) right=mid;
        else left=mid;
    }
    if(right==letters.size()) return letters[0];
    else   return letters[right];
}

public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        return lower_bound(letters,target);
    }
};