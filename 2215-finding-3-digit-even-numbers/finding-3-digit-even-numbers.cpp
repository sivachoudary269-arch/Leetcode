class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>count(10,0);
        for(int dig:digits){
            count[dig]++;
        }
        vector<int>check;
        for(int i=100;i<=998;i+=2){
            bool res=true;
            int one=i%10;
            int ten=(i/10)%10;
            int hun=(i/100)%10;
            vector<int>count1(10,0);
            count1[one]++;
            count1[ten]++;
            count1[hun]++;
            for(int j=0;j<10;j++){
                if(count1[j]>count[j]){
                     res=false;
                     break;
                }
            }
            if(res){
                check.push_back(i);
            }
        }
        return check;
    }
};