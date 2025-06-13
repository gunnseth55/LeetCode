class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max=INT_MIN;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                    max=nums[i];
                    j=i;
            }
        }
        return j;
    }
};