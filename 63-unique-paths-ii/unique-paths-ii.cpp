class Solution {
public:
    int solve(int i,int j, int row, int col,vector<vector<int>>& dp,vector<vector<int>>& obstacleGrid )
    {
         if(i>=row||j>=col)return 0;
        if(obstacleGrid[i][j]==1)return 0;
        if(i==row-1 && j==col-1)return 1;
       
        if(dp[i][j]!=-1)return dp[i][j];
        int right=solve(i,j+1,row,col,dp,obstacleGrid);
        int bottom=solve(i+1,j,row,col,dp,obstacleGrid);
        return dp[i][j]=right+bottom;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,n,m,dp,obstacleGrid);
    }
};