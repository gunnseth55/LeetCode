class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result={{}};
        for(int j:nums){
            int n=result.size();
            for(int i=0;i<n;++i){
                vector<int>temp=result[i];
                temp.push_back(j);
                result.push_back(temp);
            }
        }
        return result;
    }
};