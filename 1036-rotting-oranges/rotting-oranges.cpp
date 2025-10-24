class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        queue<pair<int,int>>q;
        int onec=0;
        for(int a=0;a<row;a++){
            for(int b=0;b<col;b++){
                if(grid[a][b]==1){
                    onec++;
                }
            }
        }
        if(onec==0)return 0;
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        int count=0,i,j;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    
                }
            }
        }
        while(!q.empty()){
            int s=q.size();
            count++;
            for(int k=0;k<s;k++){
                auto  [a,b]=q.front();q.pop();
                for(auto &d:dir){
                    int newi=d[0]+a,newj=d[1]+b;
                    if(newi>=0 && newj>=0 && newi<row&& newj<col && grid[newi][newj]==1){
                        grid[newi][newj]=2;
                        q.push({newi,newj});
                    }
                }
            }
        }
        onec=0;
        for(int a=0;a<row;a++){
            for(int b=0;b<col;b++){
                if(grid[a][b]==1){
                    onec++;
                }
            }
        }
       return onec==0?count-1:-1;
    }
};