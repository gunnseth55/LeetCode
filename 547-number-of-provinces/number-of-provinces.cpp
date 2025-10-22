class Solution {
public:
    void dfs(int src, vector<bool>&vis, vector<vector<int>>&ic){
        vis[src]=true;
        for(int i=0;i<ic.size();i++){
            if(ic[src][i]!=0 && !vis[i]){
                dfs(i,vis,ic);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       
        int n=isConnected.size();
       vector<bool>vis(n,false);
        int count=0;
       for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            dfs(i,vis,isConnected);
        }
       }
        return count;
    }
};