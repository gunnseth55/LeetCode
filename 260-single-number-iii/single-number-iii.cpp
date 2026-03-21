class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>result;
      
        for(auto p:m){
            if(p.second==1){
                result.push_back(p.first);
            }
        }
        return result;
    }
};