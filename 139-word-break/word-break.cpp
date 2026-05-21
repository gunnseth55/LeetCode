class Solution {
public:
    bool solve(vector<int>&dp, vector<string>&wordDict, string s, int start, int num){
        if(start==num)return true;
        if(dp[start]!=-1)return dp[start];

        for(int i=0;i<wordDict.size();i++){
            int n=wordDict[i].size();
            if(start+n>num)continue;
            string temp=s.substr(start,n);
            if(temp==wordDict[i]){
               
                if (solve(dp,wordDict,s,start+n, num)){
                    return  dp[start]=true;
                }
            }
        }
        return dp[start]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        vector<int>dp(n,-1);
        return solve(dp, wordDict, s, 0, n);
    }
};