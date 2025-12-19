class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i=0;
        int mid=(2*n)/2;
    
        int j=mid;
        vector<int>result;
        while(i<mid && j<(2*n) ){
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;
            j++;
        }
        return result;
    }
};