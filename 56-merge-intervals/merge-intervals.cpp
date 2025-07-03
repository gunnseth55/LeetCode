class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> res;
     
        for(int i=0;i<intervals.size();i++){

            if(res.empty()){
                res.push_back(intervals[i]);
            }
            else{
                vector<int> v=res.back();
                int prev_end=v[1];
                if(intervals[i][0]<=prev_end){
                    res.back()[1]=max(prev_end, intervals[i][1]);
                }else{
                    res.push_back(intervals[i]);
                }

            }
        }
        return res;
    }
};