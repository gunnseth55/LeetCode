class Solution {
public:

int mini(int i, int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
int n=grid.size();
int m=grid[0].size();
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==n-1 && j==m-1){
    return grid[i][j];
    }
   int down=INT_MAX, right=INT_MAX;
   if(j+1<m) right=grid[i][j]+mini(i,j+1,grid,dp);
   if(i+1<n) down=grid[i][j]+mini(i+1,j,grid,dp);
   
    dp[i][j]=min(right,down);
    return dp[i][j];
}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
int m=grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int ans=mini(0,0,grid,dp);
    return ans;


    }
};