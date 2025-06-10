class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int currentsum=0;
        for(int i=0;i<nums.size();i++){
            currentsum+=nums[i];
            if(currentsum>maxSum){
                maxSum=currentsum;
            }
            if(currentsum<0){
                currentsum=0;
            }
        }
        return maxSum;
    }
};