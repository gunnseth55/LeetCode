class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        stack<int> r;
        stack<int> c;
         int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    c.push(j);
                    r.push(i);
                }
            }
        }
        while(!c.empty()){

            for(int i=0;i<row;i++){
                matrix[i][c.top()]=0;
            }
            c.pop();
        }
        while(!r.empty()){

            for(int i=0;i<col;i++){
                matrix[r.top()][i]=0;
            }
            r.pop();
        }

    }
};