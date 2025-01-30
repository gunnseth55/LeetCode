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

 void  postorder(struct TreeNode *root, int *arr, int *index){
if(root==NULL){
    return ;
   }
  
    postorder(root->left, arr, index);
     postorder(root->right, arr, index);
 arr[*index] = root->val;
   (*index)++;
 }
int*  postorderTraversal(struct TreeNode* root, int* returnSize) {
   *returnSize=0;
   int *arr=(int*)malloc(1000*sizeof(int));
   int index=0;
   postorder(root,arr,&index);
   *returnSize = index;
   return arr;
}