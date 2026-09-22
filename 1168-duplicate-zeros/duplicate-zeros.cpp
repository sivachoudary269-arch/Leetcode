class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>check;
        for(int n:arr){
            if(check.size()==arr.size()){
                break;
            }
            else if(n==0){
                check.push_back(0);
                if(check.size()!=arr.size()){
                check.push_back(0);
                }
            }
            else{
                check.push_back(n);
            }
        }
        int i=0;
        for(int c:check){
            arr[i]=c;
            i++;
        }
    }
};