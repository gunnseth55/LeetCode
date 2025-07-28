class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result={{}};
        
        for(int num:nums){
            int n=result.size();

            for(int j=0;j<n;++j){
                vector<int> temp=result[j];
               
                temp.push_back(num);
                result.push_back(temp);
            }
           
        }
        return result;
    }
};