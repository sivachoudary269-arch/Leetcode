class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>m1;
        for(int i=0;i<r;i++){
            int m=INT_MAX;
            for(int j=0;j<c;j++){
                m=min(m,matrix[i][j]);
            }
            m1.push_back(m);
        }
        vector<int>m2;
        for(int j=0;j<c;j++){
            int m=INT_MIN;
            for(int i=0;i<r;i++){
                m=max(m,matrix[i][j]);
            }
            m2.push_back(m);
        }
        vector<int>res;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==m1[i]&&matrix[i][j]==m2[j]){
                    res.push_back(matrix[i][j]);
                }
            }
        }
    return res;    
    }
};