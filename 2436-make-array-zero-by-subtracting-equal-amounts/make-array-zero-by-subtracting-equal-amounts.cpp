class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       map<int,int>m;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0)continue;
        m[nums[i]]=i;
       }
       return m.size();
    }
};