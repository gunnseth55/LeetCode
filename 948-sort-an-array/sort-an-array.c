/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int * copy( int *arr, int start, int end){
   int n=(end-start)+1;
   int *res=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
        res[i]=arr[start+i];
    }
    return res;

 }

  void merge(int *b,int p, int *c,int q, int *arr){
    int i=0,j=0,k=0;
    while(i<p && j<q){
        if(b[i]<c[j]){
            arr[k++]=b[i++];
        }else{
            arr[k++]=c[j++];
        }
    
    }
    while(i<p){
        arr[k++]=b[i++];
    }
    while(j<q){
        arr[k++]=c[j++];
    }
  }
int* sortArray(int* nums, int numsSize, int* returnSize) {
    if(numsSize<=1){
        *returnSize=numsSize;
        return nums;
    }
    int mid=(numsSize)/2;
    int *b=copy(nums,0,mid-1);
    int *c=copy(nums,mid,numsSize-1);
    int p=mid;
    int q=numsSize-mid;
    b=sortArray(b,p,&p);
    c=sortArray(c,q,&q);
     merge(b,p,c,q,nums);
     free(b);
     free(c);
     *returnSize=numsSize;
     return nums;
}