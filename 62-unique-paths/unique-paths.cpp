class Solution {
public:
int steps(int i,int j, int m, int n,vector<vector<int>> &dp){
if(i==m-1 && j==n-1)return 1;
  
    if(i>=m ||j>=n)return 0;
  if(dp[i][j]!=-1)return dp[i][j];
    int down=steps(i+1,j,m,n,dp);
    int  right=steps(i,j+1,m,n,dp);
    return dp[i][j]=down+right;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return steps(0,0,m,n,dp);
    }
};