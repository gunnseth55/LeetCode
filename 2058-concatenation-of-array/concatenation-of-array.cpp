class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>results=nums;
        results.insert(results.end(),nums.begin(),nums.end());
        return results;

    }
};