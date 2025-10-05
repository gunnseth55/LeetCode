class Solution {
public:
void solve(vector<vector<int>>&result, vector<int>&arr, vector<int>&temp,int k,int n, int index){
    int sum=accumulate(temp.begin(),temp.end(),0);
    if(sum==n && temp.size()==k){
        result.push_back(temp);
        return;
    }
    for(int i=index;i<arr.size();i++){
        temp.push_back(arr[i]);
        solve(result,arr,temp,k,n,i+1);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        if(k>n)return result;
        vector<int>temp;
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        solve(result,arr,temp,k,n,0);
        return result;
    }
};