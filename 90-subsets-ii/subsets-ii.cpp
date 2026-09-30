class Solution {
    void check(vector<int>&nums,vector<vector<int>>&res,vector<int>curr,int i){
            if(i==nums.size()){
               res.push_back(curr);
               return;
            }
            curr.push_back(nums[i]);
            check(nums,res,curr,i+1);
            curr.pop_back();
            while(i+1<nums.size()&&nums[i]==nums[i+1]){
                i++;
            }
            check(nums,res,curr,i+1);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>curr;
        check(nums,res,curr,0);
        return res;
    }
};