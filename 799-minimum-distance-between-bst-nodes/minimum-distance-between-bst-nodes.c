/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void inorder(struct TreeNode *root, int *x, int *min){
    if(root==NULL){
        return ;
    }
    inorder(root->left,x,min);
    if(*x!=-1){
       int diff=root->val-*x;
        if(diff<*min){
            *min=diff;
        }
    }
    *x=root->val;
    inorder(root->right,x,min);
 }
int minDiffInBST(struct TreeNode* root) {
    int x=-1;
    int min=INT_MAX;
    inorder(root,&x,&min);
    return min;
}