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
 void inorder(struct TreeNode *root, int *arr, int *index){
if(root==NULL){
    return ;
   }
  
    inorder(root->left, arr, index);
    arr[*index] = root->val;
    (*index)++;
   inorder(root->right, arr, index);

 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int *arr=(int*)malloc(1000*sizeof(int));
    int index=0;
   inorder(root,arr,&index);
   *returnSize=index;
    return arr;
}
 