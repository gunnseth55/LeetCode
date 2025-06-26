class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column=matrix[0].size();
        int n=0;
        int m=column-1;
        while(n<row && m>=0){
            if(matrix[n][m]==target){
                return true;
            }else if(target<matrix[n][m]){
                m--;
            }else{
                n++;
            }
        }
        return false;
    }
};