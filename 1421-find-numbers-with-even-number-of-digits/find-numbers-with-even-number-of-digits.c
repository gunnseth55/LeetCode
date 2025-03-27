int findNumbers(int* nums, int numsSize) {
    int res=0;
    
         for(int j=0;j<numsSize;j++){
            int x=nums[j];
            int count=0;
            while(x!=0){
                x=x/10;
                count++;
            }
            if(count%2==0)
            res++;
         }
    return res;
}