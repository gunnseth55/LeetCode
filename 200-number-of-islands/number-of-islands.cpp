class Solution {
public:
    void solve(vector<vector<char>>&grid, int row, int col,int i, int j){
        if(i==row||j==col||i<0||j<0||grid[i][j]=='0')return;

        grid[i][j]='0';
        solve(grid,row, col,i-1,j);
        solve(grid,row, col,i+1,j);
        solve(grid,row, col,i,j-1);
        solve(grid,row, col,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    count++;
                    solve(grid,rows,cols,i,j);
                }
            }
        }
        return count;
    }
};