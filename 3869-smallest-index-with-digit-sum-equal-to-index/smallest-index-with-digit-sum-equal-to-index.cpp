class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0;
        for(int n:nums){
            int dig_sum=0;
            while(n>0){
                dig_sum += n%10;
                n=n/10;
            }
            if(dig_sum==i){
                return i;
            }
            i++;
        }
        return -1;
    }
};