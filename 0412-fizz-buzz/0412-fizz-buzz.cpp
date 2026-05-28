class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i=0;i<n;i++){
            answer[i] = to_string(i+1); //注意
            if((i+1)%3==0) answer[i]="Fizz";
            else if((i+1)%5==0) answer[i]="Buzz";
            
            if((i+1)%5==0 && (i+1)%3==0) answer[i]="FizzBuzz";
    }
    return answer;
    }
};

