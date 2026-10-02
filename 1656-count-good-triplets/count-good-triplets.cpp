class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int s=arr.size();
        int good=0;
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                for(int k=j+1;k<s;k++){
                    if(abs(arr[i]-arr[j])<=a&&abs(arr[j]-arr[k])<=b&&abs(arr[i]-arr[k])<=c){
                     good++;
                    }
                }
            }
        }
        return good;
    }
};