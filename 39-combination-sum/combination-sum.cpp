class Solution {
public:
void solve(vector<vector<int>>&result,vector<int>&temp,vector<int>&candidates, int target, int index){

if(target==0){
    result.push_back(temp);
    return;
}
if(index>=candidates.size())return;
if(candidates[index]<=target){

temp.push_back(candidates[index]);
solve(result,temp,candidates,target-candidates[index],index);
temp.pop_back();
}
solve(result,temp,candidates,target,index+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        solve(result,temp,candidates,target,0);
        return result;
    }
};