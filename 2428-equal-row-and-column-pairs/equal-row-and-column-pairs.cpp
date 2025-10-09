class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        map<vector<int>,int>m;
        for(auto &i:grid){
           m[i]++;
        }
        int count=0;
        for(int i=0;i<col;i++){
            vector<int>temp;
            for(int j=0;j<row;j++){
                temp.push_back(grid[j][i]);
            }
            count+=m[temp];
        }
        
        return count;
    }
};