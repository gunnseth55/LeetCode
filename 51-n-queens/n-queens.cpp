class Solution {
public:
bool isSafe(int row, int col , int n, vector<string> &board ){
    //horizontal
    for(int i=col;i>=0;i--){
        if(board[row][i]=='Q'){
            return false;
        }
    }
    //vertical
    for(int i=row;i>=0;i--){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //left-diagonal
    for(int i=row,j=col;i>=0&& j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //right-diagonal
    for(int i=row,j=col;i>=0 && j<n; i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
return true;

}
 void solve(int n, int row,vector<string> &board ,vector<vector<string>> & ans){
    if(row==n)
        {
            ans.push_back(board);
            return;
        }

        for(int i=0;i<n;i++){
            if(isSafe(row,i,n,board)){
                board[row][i]='Q';
                solve(n,row+1,board,ans);
                board[row][i]='.';
            }
        }
    }
   
 
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        solve(n,0,board,ans);
        return ans;
    }
};