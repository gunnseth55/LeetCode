class Solution {
public:
    void dfs(int src, vector<bool>&vis, vector<list<int>>&lis){
        vis[src]=true;
        for(int i:lis[src]){
            if(!vis[i]){
                dfs(i,vis,lis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<list<int>>lis;
        int n=isConnected.size();
        vector<bool>vis(n,false);
        for(int i=0;i<isConnected.size();i++){
            list<int>temp;
            for(int j=0;j<isConnected[i].size();j++){
                if(i==j)continue;
                if(isConnected[i][j]!=0){
                    temp.push_back(j);
                }
            }
            lis.push_back(temp);
        }
        int count=0;
       for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            dfs(i,vis,lis);
        }
       }
        return count;
    }
};