class Solution {
public:
long solve(int index,vector<int> &coins, int amount,vector<vector<int>>&dp){
           
            if(amount==0)return 0;
            if(index<0)return 1e9;
             if(dp[index][amount]!=-1)return dp[index][amount];
            int take=1e9;
            if(coins[index]<=amount){
                take=1+solve(index,coins,amount-coins[index],dp);
            }
            int notake=solve(index-1,coins,amount,dp);
            return dp[index][amount]=min(notake,take);
        }

    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int count=solve(n-1,coins,amount,dp);
        return count>=1e9?-1:count;
    }
};