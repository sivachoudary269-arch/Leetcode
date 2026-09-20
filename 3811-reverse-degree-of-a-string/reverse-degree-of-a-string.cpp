class Solution {
public:
    int reverseDegree(string s) {
        int check=0;
        for(int i=0;i<s.length();i++){
            int rev='z'-s[i]+1;
            int inx=i+1;
            check+=(rev*inx);
        }
        return check;
    }
};