/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **answer=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        if((i+1)%3==0 && (i+1)%5==0){
            answer[i]=strdup("FizzBuzz");
        }else if((i+1)%5==0){
            answer[i]=strdup("Buzz");
        }else if((i+1)%3==0){
            answer[i]=strdup("Fizz");
        }else{
            answer[i]=(char*)malloc(20);
            sprintf(answer[i],"%d",i+1);
        }
    }
    *returnSize=n;
    return answer;
}