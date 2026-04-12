class Solution {
public:
void solve(int n,vector<int>&used, vector<vector<int>>&result, vector<int>&temp, vector<int>&nums){
if(temp.size()==n){
    result.push_back(temp);
    return;
}

    for(int i=0;i<nums.size();i++){
      if(used[i]==0)continue;
       
        temp.push_back(nums[i]);
        used[i]=0;

        solve(n,used,result,temp,nums);
        temp.pop_back();
        used[i]=-1;
       
    }
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
         int n=nums.size();
        vector<int>used(n+1,-1);
       vector<int>temp;
        solve(n,used,result,temp,nums);
        return result;
    }
};