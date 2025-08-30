class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        result.push_back({});
        int prev=0;
        for(int i=0;i<nums.size();i++){
            int start=0;
            if(i>0 && nums[i]==nums[i-1]){
                start=prev;
            }else{
                start=0;
            }
            int n=result.size();
            prev=n;
            for(int j=start;j<n;j++){
                vector<int>temp=result[j];
                temp.push_back(nums[i]);
                result.push_back(temp);
            }
        }
        return result;
    }
};