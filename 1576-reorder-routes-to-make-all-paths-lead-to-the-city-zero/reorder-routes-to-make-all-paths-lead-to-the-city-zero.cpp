class Solution {
public:
int dfs(int src,vector<bool>&vis, vector<vector<int>>&graph){
auto count=0;
vis[src]=true;
 for(auto v:graph[src]){
    if(!vis[abs(v)]){
        count+=dfs(abs(v),vis,graph)+(v>0);
    }
 }
 return count;
}
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>>graph(n);
        for(auto &i:connections){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(-i[0]);
        }
        vector<bool>vis(n,false);
        return dfs(0,vis,graph);
    }
};