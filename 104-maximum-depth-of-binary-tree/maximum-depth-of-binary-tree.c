/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 int max(int a, int b){
    return a>b?a:b;
 }
int maxDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL){
        return 1+maxDepth(root->right);
    }
    if(root->right==NULL){
        return 1+maxDepth(root->left);
    }
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}