class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int nn=nums.size();
        int i=0;
        int mid=nn/2;
    
        int j=mid;
        vector<int>result;
        while(i<mid && j<nn ){
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;
            j++;
        }
        return result;
    }
};