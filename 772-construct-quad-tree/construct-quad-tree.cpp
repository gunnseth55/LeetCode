/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
Node* create(vector<vector<int>> &grid, int start_row, int start_col,int end_row, int end_col){

int row_middle=(start_row+end_row)/2;
int col_middle=(start_col+end_col)/2;
bool same=true;
int start=grid[start_row][start_col];
for(int i=start_row;i<=end_row && same;i++){
    for(int j=start_col;j<=end_col;j++){
        if(grid[i][j]!=start){
           same=false;
            break;
        }
    }
}

if(same){
return new Node(start==1,true);
}

return new Node(
true,
false,
create(grid,start_row,start_col,row_middle,col_middle),
create(grid,start_row,col_middle+1,row_middle,end_col),
create(grid,row_middle+1,start_col,end_row,col_middle),
create(grid,row_middle+1, col_middle+1,end_row,end_col)
);


}
    Node* construct(vector<vector<int>>& grid) {
        int n=grid.size();
        return create(grid,0,0,n-1,n-1);
    }
};