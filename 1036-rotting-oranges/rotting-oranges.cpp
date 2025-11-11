class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int onec=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    onec++;
                }
            }
        }
        vector<pair<int,int>>dir={{+1,0},{0,-1},{-1,0},{0,+1}};
        int count=0;
        if (onec==0)return 0;
        while(!q.empty()){
            int n=q.size();
            count++;
            for(int i=0;i<n;i++){
               auto [a,b]=q.front(); q.pop();
                for(auto d:dir){
                    int na=a+d.first,nb=b+d.second;
                    if(na>=0 && nb>=0 && na<row && nb<col && grid[na][nb]==1)
                    {
                        grid[na][nb]=2;
                        q.push({na,nb});
                    }

                }
            }


        }
        onec=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                 if(grid[i][j]==1)   onec++;
            }
        }
        return onec==0?count-1:-1;
    }
};