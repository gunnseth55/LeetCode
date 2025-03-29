/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void util(struct TreeNode *root, int *prev, int *currentcount, int *maxcount, int **res,int *x){
    if(root==NULL){
        return;
    }
    util(root->left,prev,currentcount,maxcount,res,x);
    if(*prev==root->val){
        (*currentcount)++;
    }else{
        *prev=root->val;
        *currentcount=1;
    }
    
   
    if(*currentcount>*maxcount){
        *maxcount=*currentcount;
        (*x)=0;
         (*res)[(*x)++]=root->val;
    }
    else if(*currentcount==*maxcount)
    {
             (*res)[(*x)++]=root->val;
    }
     util(root->right,prev,currentcount,maxcount,res,x);
 }
 
int* findMode(struct TreeNode* root, int* returnSize) {
    int prev=INT_MIN;
    int maxcount=0, currentcount=0;
    int x=0;
    int *res=(int*)malloc(10000*sizeof(int));
    util(root,&prev,&currentcount,&maxcount,&res,&x);
    *returnSize= x;
    return res;
    
}