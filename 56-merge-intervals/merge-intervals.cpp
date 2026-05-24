class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        for(int i=0;i<intervals.size();i++){
            if(result.empty()){
                result.push_back(intervals[i]);
            }else{
                vector<int>v=result.back();
                int prev=v[1];
                if(prev>=intervals[i][0]){
                    result.back()[1]=max(prev,intervals[i][1]);
                }else{
                    result.push_back(intervals[i]);
                }
            }
        }
        return result;
    }
};