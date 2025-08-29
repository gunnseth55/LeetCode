class Solution {
public:
void solve(vector<vector<int>>&result,vector<int>&temp, vector<int> &arr,int k, int index, int target){
    int sum=accumulate(temp.begin(),temp.end(),0);
  if(temp.size()==k && sum==target){
    result.push_back(temp);
    return;
  }
  for(int i=index;i<arr.size();i++){
    temp.push_back(arr[i]);
    solve(result,temp,arr,k,i+1,target);
    temp.pop_back();
  }
  
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        if(k>n)return result;
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        
        solve(result,temp,arr,k,0,n);
        
        return result;
    }
};