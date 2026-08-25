class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>result;
        set<int>s;
        int row=grid.size();
        int col=grid[0].size();
        int a,b;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int x=grid[i][j];
                if(s.find(x)!=s.end()){
                    a=x;
                }else{
                    s.insert(x);
                }
            }
        }
        int total=(row*col)*(row*col+1)/2;
        int sum=0;
        for(int m:s){
            sum+=m;
        }
        b=total-sum;
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};