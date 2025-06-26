class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        int col=matrix[0].size();
        int row=matrix.size();
         int sr=0,sc=0,er=row-1,ec=col-1;
         vector<int> arr;
while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
            arr.push_back(matrix[sr][i]);
        }
         for(int i=sr+1;i<=er;i++){
            arr.push_back(matrix[i][ec]);
        }
        for(int i=ec-1;i>=sc;i--){
if(sr==er){break;}

            arr.push_back(matrix[er][i]);
        }for(int i=er-1;i>=sr+1;i--){
            if(sc==ec){
                break;
            }

            arr.push_back(matrix[i][sc]);
        }
        sr++;
        sc++;
        er--;
        ec--;
}
return arr;
    }
};