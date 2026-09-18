class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        vector<int>check;
        while(i>=0||k>0){
            if(i>=0){
                k+=num[i];
                i--;
            }
            check.push_back(k%10);
            k/=10;
        }
        reverse(check.begin(),check.end());
        return check;
    }
};