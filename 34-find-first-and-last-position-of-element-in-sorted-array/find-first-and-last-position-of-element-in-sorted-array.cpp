class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        vector<int>result(2,-1);
        while(start<=end){

            int mid=start+(end-start)/2;
            if(nums[mid]>=target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        if(start<n && nums[start]==target){
            result[0]=(start);
        }else {
            return result;
        }
        end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<=target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        result[1]=(end);
        return result;
    }
};