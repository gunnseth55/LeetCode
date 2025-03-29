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
 void count( struct TreeNode *root, int ** res, int *x){
    if(root==NULL){
        return;
    }
    count(root->left, res, x);
    (*res)[(*x)++]=root->val;
    count(root->right, res, x);
 }
  void sort(int *res, int n){
   for (int i=0;i<n;i++){
       for(int j=0;j<(n)-i-1;j++){
           if (res[j] > res[j + 1]) {
    int temp = res[j];
    res[j] = res[j + 1];
    res[j + 1] = temp;
    }

        }
    }
  }
int* getAllElements(struct TreeNode* root1, struct TreeNode* root2, int* returnSize) {
    int *res=(int*)malloc(1000000*sizeof(int));
    int x=0;
    count(root1,&res,&x);
    count(root2,&res,&x);
    *returnSize=x;
    sort(res,*returnSize);
    return res;
}