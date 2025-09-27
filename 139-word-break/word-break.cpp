class Solution {
public:
bool solve(string s, vector<string>&wordDict, int start, vector<int>&dp){
if(start==s.size())return true;
if(dp[start]!=-1)return dp[start];
for(int i=0;i<wordDict.size();i++){
    int n=wordDict[i].size();
    if((start+n)>s.size()){
        continue;
    }
    string temp=s.substr(start,n);
    if(temp==wordDict[i]){
        if(solve(s,wordDict,start+n,dp)){
            return dp[start]=true;
        }
    }
}

return dp[start]=false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
        return solve(s,wordDict,0,dp);
    }
};