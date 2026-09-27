class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int count=0;
        int prefix_sum=0;
        for(int n:nums){
            prefix_sum+=n;
            if(map.count(prefix_sum-k)){
                count+=map[prefix_sum-k];
            }
            map[prefix_sum]++;
        }
        return count;
    }
};