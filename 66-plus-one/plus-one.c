/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int extra=1;
    for(int i=0;i<digitsSize;i++){
        if(digits[i]!=9){
            extra=0;
        }
    }
    int new=digitsSize+extra;
    int *result=(int*)malloc(new*sizeof(int));
    int carry=1;
    int sum=0;
   for(int i=digitsSize-1;i>=0;i--){
    sum=digits[i]+carry;
    result[i + extra] = sum % 10;
    carry=sum/10;
   }
    if(extra){
        result[0]=1;
    }
    *returnSize=new;
    return result;
}