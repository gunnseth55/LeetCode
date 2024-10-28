
#include<stdio.h>
void merge(int* num1, int nums1Size, int m, int* num2, int nums2Size, int n) {
   int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0&&j>=0){
        if(num1[i]>num2[j]){
            num1[k]=num1[i];
            i--;
        }else{
            num1[k]=num2[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        num1[k]=num2[j];
        j--;
        k--;
    }

}
