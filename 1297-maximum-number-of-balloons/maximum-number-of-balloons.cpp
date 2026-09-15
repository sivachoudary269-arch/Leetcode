class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(char c:text){
            if(c=='b') b++;
            else if(c=='a') a++;
            else if(c=='l') l++;
            else if(c=='o') o++;
            else if(c=='n') n++;
        }
        l=l/2;
        o=o/2;
        vector<int>check={b,a,l,o,n};
        int m=INT_MAX;
        for(int i=0;i<check.size();i++){
            if(check[i]<m){
                m=check[i];
            }
        }
        return m;       
    }
};