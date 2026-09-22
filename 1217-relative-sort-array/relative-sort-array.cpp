class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>count(1001,0);
        for(int n:arr1){
            count[n]++;
        }
        vector<int>res;
        for(int n:arr2){
            while(count[n]>0){
                res.push_back(n);
                count[n]--;
            }
        }
        for(int i=0;i<=1000;i++){
            while(count[i]>0){
                res.push_back(i);
                count[i]--;
            }
        }
        return res;
    }
};