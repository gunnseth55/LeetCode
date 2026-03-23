class Solution {
public:
    void solve(int x,int y,vector<vector<char>>& grid,int row,int col){
       
        if(x>=row ||y>=col ||x<0 ||y<0||grid[x][y]=='0')return;
        grid[x][y]='0';
            solve(x+1,y,grid,row,col);
            solve(x-1,y,grid,row,col);
            solve(x,y+1,grid,row,col);
            solve(x,y-1,grid,row,col);
    }
    int numIslands(vector<vector<char>>& grid) {
       
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(grid[i][j]=='1'){
            count++;
        solve(i,j,grid,n,m);
        }
        }
        }
        return count;
    }
};