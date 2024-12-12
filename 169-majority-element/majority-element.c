int majorityElement(int* nums, int numsSize) {
    int major=nums[0];
    int count=0;
    for(int i=0;i<numsSize;i++){
       if(count ==0){
        major=nums[i];
        count=1;
       }else if(major==nums[i]){
        count++;
       }else{
        count--;
       }
    }
    count=0;
    for(int i=0;i<numsSize;i++){
        if(major==nums[i]){
            count++;
        }
    }
    if(count>numsSize/2){
        return major;
    }
    return -1;
}