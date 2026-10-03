class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int s=arr.size();
        int i=0;
        int check=0;
        while(i<s){
            if(arr[i]%2!=0){
                check++;
                i++;
            }
            else{
                check=0;
                i++;
            }
            if(check==3){
                return true;
            }
        }
        return false;
    }
};