class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int check=INT_MAX;
        for(int i=1;i<arr.size();i++){
            check=min(check,abs(arr[i-1]-arr[i]));
        }
        vector<vector<int>>res;
        for(int i=1;i<arr.size();i++){
            if(check==abs(arr[i-1]-arr[i])){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};