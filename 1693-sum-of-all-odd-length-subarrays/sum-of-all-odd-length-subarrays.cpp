class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s=arr.size();
        int sum=0;
        for(int i=0;i<s;i++){
            sum+=arr[i];
            for(int j=i+1;j<s;j++){
                if(abs(i-j+1)%2!=0){
                  for(int k=i;k<=j;k++){
                    sum+=arr[k];
                  }
                }
            }
        }
        return sum;
    }
};