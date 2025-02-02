int missingNumber(int* nums, int numsSize) {
     int n = numsSize;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        actual_sum += nums[i];
    }
    
    return expected_sum - actual_sum;
}