class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        bool ans=false;
       unordered_map<int,int>m;
       m.insert({nums[0],0});
       for(int i=1;i<n;i++){
        if(m.find(nums[i])!=m.end()){
            if(abs(m[nums[i]]-i)<=k)ans=true;
        }
        m[nums[i]]=i;
       }
        return ans;
    }
};