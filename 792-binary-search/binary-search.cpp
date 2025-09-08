class Solution {
public:
int solve(vector<int>&nums, int target, int start, int end){
    if(start>end)return -1;
    int mid=start+(end-start)/2;
    if(nums[mid]==target)return mid;
    if(target<nums[mid]){
        mid=solve(nums,target,start,mid-1);
    }else if(nums[mid]<target){
        mid=solve(nums,target,mid+1,end);
    }
    return mid;
}
    int search(vector<int>& nums, int target) {
        int x;
        x=solve(nums,target,0, nums.size()-1);
        return x;
    }
};