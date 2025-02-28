bool isPowerOfThree(int n) {
   
    if(n<=0)
    return false;
    int maxPowerOfThree = 1;
    while (maxPowerOfThree <= INT_MAX / 3) {
        maxPowerOfThree *= 3;
    }
    return maxPowerOfThree % n == 0;
}