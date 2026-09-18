class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int s=nums.size();
        unordered_map<int,int>count;
        for(int num:nums){
            count[num]++;
        }
        for(int num:nums){
           if(count[num]==s/2){
             return num;
           }
        }
        return 0;
    }
};