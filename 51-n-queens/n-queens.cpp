class Solution {
public:
bool isValid(int col, int row, int n, vector<string>&temp){

for(int i=0;i<row;i++){
if(temp[i][col]=='Q')return false;
}


for(int i=row-1 , j=col-1;i>=0 && j>=0;i-- , j--){
if(temp[i][j]=='Q')return false;
}
for(int i=row-1 , j=col+1;i>=0 && j<n;i-- , j++){
if(temp[i][j]=='Q')return false;
}
return true;
}
void solve(vector<string>&temp, vector<vector<string>>&result,int row, int n){
if(row==n){
    result.push_back(temp);

}
for(int i=0;i<n;i++){
    if(isValid(i,row, n,temp)){
        temp[row][i]='Q';
        solve(temp,result,row+1,n);
        temp[row][i]='.';
    }
}


}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>temp(n,string(n,'.'));
        vector<vector<string>>result;
        solve(temp,result,0,n);
        return result;
    }
};