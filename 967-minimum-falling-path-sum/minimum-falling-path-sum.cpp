class Solution {
public:
    int funct(int i,int j, vector<vector<int>>&matrix, vector<vector<long>>&dp){
        if(dp[i][j]!=INT_MAX)return dp[i][j];
        int n=matrix.size();
        if(i==n-1){
          dp[i][j]=matrix[i][j];
          return matrix[i][j];
        }
        int down=matrix[i][j]+funct(i+1,j,matrix,dp);
        int left=INT_MAX,right=INT_MAX;
        if(j>0)  left=matrix[i][j]+funct(i+1,j-1,matrix,dp);
        if(j<n-1) right=matrix[i][j]+funct(i+1,j+1,matrix,dp);
       dp[i][j]= min({down,left,right});
       return dp[i][j];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<long>> dp(n,vector<long>(n,INT_MAX));
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
                ans=min(ans,funct(0,i,matrix,dp));
        }
        return ans;
    }
};