class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        int i=1;
        while(missing.size()<k){
             bool check=false;
             for(int j=0;j<arr.size();j++){
                if(i==arr[j]){
                    check=true;
                    break;
                }
             }
             if(!check){
               missing.push_back(i);
             }
             if(missing.size()==k){
                return i;
             }
             i++;
        }
        return 0;
    }
};