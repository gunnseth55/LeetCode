class Solution {
public:

int mini(int i, int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp){

    if(dp[i][j]!=-1)return dp[i][j];
    if(i==n-1 && j==m-1){
    return grid[i][j];
    }
   int down=INT_MAX, right=INT_MAX;
   if(j+1<m) right=grid[i][j]+mini(i,j+1,n,m,grid,dp);
   if(i+1<n) down=grid[i][j]+mini(i+1,j,n,m,grid,dp);
   
    dp[i][j]=min(right,down);
    return dp[i][j];
}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
int m=grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
   return mini(0,0,n,m,grid,dp);
  
    }
};