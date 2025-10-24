class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int row=maze.size(),col=maze[0].size();
        queue<pair<int,int>>q;
        int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int count=0;
        while(!q.empty()){
            int s=q.size();
            count++;
            for(int k=0;k<s;k++){
                auto [i,j]=q.front();q.pop();
                
                for(auto &d:dir){
                    int newi=i+d[0];
                    int newj=j+d[1];
                    if(newi>=0 &&newj>=0 && newi<row && newj<col&& maze[newi][newj]=='.'){
                        if(newi==0 || newj==0 ||newi==row-1||newj==col-1){
                            return count;
                        }
                            q.push({newi,newj});
                            maze[newi][newj]='+';
                        
                    }
                }
            }
        }
        return -1;
    }
};