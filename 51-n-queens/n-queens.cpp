class Solution {
public:
bool safe(int i,int j,vector<string>&vec,int n){
    
    for(int k=j;k<n;k++){
        if(vec[i][k]=='Q')return false;
    }
    for(int k=i;k>=0;k--){
        if(vec[k][j]=='Q')return false;
    }
    for(int m=i,k=j;m>=0 && k>=0;m--,k--){
        if(vec[m][k]=='Q')return false;
    }
    for(int m=i,k=j;m>=0 && k<n;m--,k++){
        if(vec[m][k]=='Q')return false;
    }
    return true;
}
void solve(int n,vector<vector<string>>&vec,vector<string>&maze,int index){
    if(index==n)
    {vec.push_back(maze) ;
    return ;
    }
    for(int i=0;i<n;i++){
        if(safe(index,i,maze,n)){
            maze[index][i]='Q';
            solve(n,vec,maze,index+1);
           maze[index][i]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>vec;
        vector<string>maze(n,string(n,'.'));
        solve(n,vec,maze,0);
        return vec;
    }
};