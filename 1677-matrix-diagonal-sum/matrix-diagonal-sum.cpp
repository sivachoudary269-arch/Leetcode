class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int fir=0;
        int sec=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  if(i==j){
                    fir+=mat[i][j];
                  }
                  if(j==c-i-1){
                    sec+=mat[i][j];
                  }
            }
        }
        if((r*c)%2==0){
            return fir+sec;
        }
        else{
            int ce=r/2;
            return fir+sec-mat[ce][ce];
        }
        return 0;
    }
};