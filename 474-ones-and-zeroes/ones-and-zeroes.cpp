class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(string &s:strs){
            int z=count(s.begin(),s.end(),'0');
            int ones=s.size()-z;
            for(int i=m;i>=z;i--){
                for(int j=n;j>=ones;j--){
                    dp[i][j]=max(dp[i][j],dp[i-z][j-ones]+1);
                }
            }
        }
        return dp[m][n];
    }
};