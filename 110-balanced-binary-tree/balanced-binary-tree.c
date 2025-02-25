/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int findheight(struct TreeNode *root){
    if(root==NULL){
        return 0;
    }
  int leftheight=findheight(root->left);
  int rightheight=findheight(root->right);
  return (leftheight>rightheight?leftheight:rightheight) +1;
 }
bool isBalanced(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }
    int leftheight=findheight(root->left);
    int rightheight=findheight(root->right);
    if(abs(leftheight-rightheight)>1){
        return false;
    }
    return isBalanced(root->left)&& isBalanced(root->right);
}