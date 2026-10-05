class Solution {
public:
    int scoreOfParentheses(string s) {
       int score=0,check=0;
       for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                check++;
            }
            else{
                check--;
                if(s[i-1]=='('){
                    score+=1<<check;
                }
            }
       }
       return score;
    }
};