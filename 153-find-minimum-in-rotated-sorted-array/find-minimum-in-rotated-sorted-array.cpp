class Solution {
public:
    int findMin(vector<int>& nums) {
        int minn=INT_MAX;
      int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
           minn=min(minn, nums[mid]);
           if(nums[mid]>nums[r] && nums[mid]>=nums[l]){
            l=mid+1;
            }else {
              r=mid-1;
            }
        }
        return minn;
    }
};