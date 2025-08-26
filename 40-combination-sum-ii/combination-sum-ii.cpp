class Solution {
public:

void solve(vector<vector<int>>&result, vector<int>&temp, vector<int> &candidates,int index, int target){
if(target==0){
    result.push_back(temp);
    return;
    
}
if(index>=candidates.size())return;

for(int i=index;i<candidates.size();i++){
    if(i>index && candidates[i]==candidates[i-1])continue;

    if(candidates[i]>target)break;

    temp.push_back(candidates[i]);
    solve(result,temp,candidates,i+1,target-candidates[i]);
    temp.pop_back();
}
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        sort(candidates.begin(),candidates.end());
     
        vector<int>temp;
        solve(result,temp,candidates,0,target);
        return result;
    }
};