class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int> ans;
       set<int> m;
        int row=grid.size();
        int col=grid[0].size();
int a,b;

       for(int i=0;i<row ;i++){
            for(int j=0;j<col;j++){

                    int x=grid[i][j];
                    if(m.find(x)!=m.end()){
                        a=x;
                       
                    }else{
                        m.insert(x);
                    }

            }
        }
        int sum=0;
        for(auto x:m){
            sum+=x;
        }

    int total=(row*col)*(row*col+1)/2;
    b=total-sum;
    ans.push_back(a);
    ans.push_back(b);
    return ans;

    }
};