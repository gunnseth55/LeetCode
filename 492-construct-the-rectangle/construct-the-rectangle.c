/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int *result=(int *)malloc(2*sizeof(int));
if(result==NULL){
    return NULL;
}
        int w = (int)sqrt(area);
    
    while (w > 0) {
        if (area % w == 0) {
           result[0]=area/w;
           result[1]=w;
           *returnSize=2;
           return result;
        }
        w--;
    }
    free(result);
    *returnSize=0;
return NULL;


}