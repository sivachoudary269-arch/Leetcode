class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>check(10,0);
        for(int d:digits){
            check[d]++;
        }
        int count=0;
        for(int i=100;i<=998;i+=2){
            int hun=i/100;
            int ten=(i/10)%10;
            int one=i%10;
            vector<int>dig(10,0);
            dig[hun]++;
            dig[ten]++;
            dig[one]++;
            bool ans=true;
            for(int j=0;j<10;j++){
                if(dig[j]>check[j]){
                    ans=false;
                    break;
                }
            }
            if(ans){
                count++;
            }
        }
        return count;
    }
};