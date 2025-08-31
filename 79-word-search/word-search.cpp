class Solution {
public:
bool solve(vector<vector<char>>&board, string &word, int i, int j, int row, int col,int index){
if(index==word.length())return true;

if(i<0||j<0||i>=row||j>=col)return false;
char c=board[i][j];
if(c!=word[index])return false;
board[i][j]='$';
bool ans=solve(board,word,i,j+1,row,col,index+1)||solve(board,word,i,j-1,row,col,index+1)||solve(board,word,i-1,j,row,col,index+1)||solve(board,word,i+1,j,row,col,index+1);
board[i][j]=c;
return ans;
}

    bool exist(vector<vector<char>>& board, string word) {
        
        int row=board.size();
        int col=board[0].size();
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
               
               if( solve(board,word,i,j,row,col,0))return true;
                
              }
        }
        return false;
    }
};