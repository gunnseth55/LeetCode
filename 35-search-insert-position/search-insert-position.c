int searchInsert(int* nums, int numsSize, int target) {
   int start =0;
   int end=numsSize-1;
   int mid;

   while(start<=end){
    for(int i=0;i<numsSize;i++){
        mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
           start=mid+1;
        }else if(target<nums[mid]){
            end=mid-1;
        }
    }
   }

    return start;
}