class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        queue<int>arr;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr.push(matrix[i][j]);
            }
        }

        for(int j=col-1;j>=0;j--){
            for(int i=0;i<row;i++){
                matrix[i][j]=arr.front();
                arr.pop();
            }
        }
    }
};