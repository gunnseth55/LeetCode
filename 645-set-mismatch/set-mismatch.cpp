class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>result;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.empty()){
                m[nums[i]]=i;
                continue;
            }
            if(m.find(nums[i])!=m.end()){
                result.push_back(nums[i]);
            }else{
                m[nums[i]]=i;
            }
        }
        int sum=0;
        for(auto &i:m){
            sum+=i.first;
        }
        int n=nums.size();
        int total=(n*(n+1))/2;
        result.push_back(total-sum);
        return result;
    }
};