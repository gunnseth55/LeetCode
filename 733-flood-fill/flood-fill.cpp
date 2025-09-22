class Solution {
public:
void solve(vector<vector<int>>&result, int i, int j, int row, int col, int color , int og){
if(i>=row||j>=col){
    return;
}
if(i<0 || j<0){
    return;
}
if(result[i][j]!=og){
    return;
}
result[i][j]=color;
solve(result,i-1,j,row,col,color,og);
solve(result,i,j+1,row,col,color,og);
solve(result,i,j-1,row,col,color,og);
solve(result,i+1,j,row,col,color,og);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> result=image;
        
        int og=image[sr][sc];
        if(og==color)return image;
        int row=image.size();
        int col=image[0].size();
        solve(result,sr,sc, row, col,color,og);
        return result;
    }
};