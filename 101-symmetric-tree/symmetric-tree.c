/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
  bool mirror(struct TreeNode * root, struct TreeNode *root1){
    if(root==NULL && root1==NULL){
        return true;
    }
    if(root==NULL || root1==NULL){
        return false;
    }
    return (root->val==root1->val)&& mirror(root->left, root1->right) && mirror(root->right, root1->left);
  }
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }
   return mirror(root->left,root->right);
}