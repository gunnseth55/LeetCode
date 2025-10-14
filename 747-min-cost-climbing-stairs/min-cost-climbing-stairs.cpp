class Solution {
public:
int solve(vector<int>&dp ,int n,vector<int>&costs){
    if(n<=1)return 0;
    if(dp[n]!=-1)return dp[n];
   
    return dp[n]=min(solve(dp,n-1,costs)+costs[n-1],solve(dp,n-2,costs)+costs[n-2]);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        
        return solve(dp,n,cost);
    }
};