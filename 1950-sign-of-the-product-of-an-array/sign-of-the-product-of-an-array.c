int arraySign(int* nums, int numsSize) {
    int sign=1;
    for (int i=0;i<numsSize;i++){
        if(nums[i]==0){
            return 0;
        }
        if(nums[i]<0){
            sign=-sign;
        }
    }
    return sign;
}