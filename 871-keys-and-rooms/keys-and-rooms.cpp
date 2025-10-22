class Solution {
public:
void dfs(int src,vector<bool>&vis,vector<vector<int>>& rooms){
    vis[src]=true;
    for(int v:rooms[src]){
        if(!vis[v]){
            dfs(v,vis,rooms);
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        
          
               dfs(0,vis,rooms);
            
        
        for(bool i:vis){
            if(i==false){
                return false;
            }
        }
        return true;
    }
};