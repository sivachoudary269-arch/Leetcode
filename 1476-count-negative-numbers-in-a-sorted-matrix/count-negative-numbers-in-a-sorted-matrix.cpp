class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int r=grid.size();
        int c=grid[0].size();
        int row=0;
        int col=c-1;
        while(row<r&&col>=0){
            if(grid[row][col]<0){
                count+=(r-row);
                col--;
            }
            else{
                row++;
            }
        }
        return count;
    }
};