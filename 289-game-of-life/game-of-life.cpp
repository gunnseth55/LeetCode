class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp= board;
       int m=board.size();
       int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    int x=temp[i][j];
                    int count=0;
                   
                        if( i>0 && temp[i-1][j]==1){
                            count++;
                        }
                         if( j>0 && temp[i][j-1]==1){
                            count++;
                        }
                         if( i<m-1&&temp[i+1][j]==1){
                            count++;
                        }
                         if(j<n-1 && temp[i][j+1]==1){
                            count++;
                        }
                         if( i>0 && j>0 && temp[i-1][j-1]==1){
                            count++;
                        }
                         if( i<m-1 && j<n-1 && temp[i+1][j+1]==1){
                            count++;
                        }
                         if( i>0 && j<n-1 && temp[i-1][j+1]==1){
                            count++;
                        }
                         if( i<m-1 && j>0&& temp[i+1][j-1]==1){
                            count++;
                        }


                        if(x==0){
                            if(count==3){
                                board[i][j]=1;
                            }
                        }
                        else{
                    if(count<2||count>3){
                            board[i][j]=0;
                            }
                            }
        }
        }

    }
};