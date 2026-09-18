class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>check;
        for(int n:nums){
            check.push_back(n*n);
        }
        sort(check.begin(),check.end());
        return check;
    }
};