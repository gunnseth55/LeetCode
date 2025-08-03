class Solution {
public:

int steps(int i,int j, int m, int n, vector<vector<int>>&dp, vector<vector<int>>&grid){
 if(i>=m || j>=n)return 0;
 if(grid[i][j]==1)return 0;
    if(i==m-1 && j==n-1)return 1;
   
    if(dp[i][j]!=-1)return dp[i][j];
    
    int right=steps(i,j+1,m,n,dp,grid);
    int down=steps(i+1,j,m,n,dp,grid);
    return dp[i][j]=right+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return steps(0,0,m,n,dp,obstacleGrid);
    }
};