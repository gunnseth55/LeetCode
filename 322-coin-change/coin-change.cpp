class Solution {
public:
    int solve(vector<int>& coins, int amount, vector<vector<int>>&dp, int index)
    {

        if(amount==0)return 0;
        if(index<0)return 1e9;
        if(dp[index][amount]!=-1)return dp[index][amount];
        int take=1e9;
        if(coins[index]<=amount){
            take=1+solve(coins,amount-coins[index],dp,index);
        }
        int notTaken=solve(coins, amount, dp, index-1);
        return dp[index][amount]=min(take,notTaken);


    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n =coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= solve(coins,amount, dp, n-1);
        return ans>=1e9?-1:ans;
    }
};