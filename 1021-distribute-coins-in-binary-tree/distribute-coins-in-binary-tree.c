/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int res;
  int countcoins(struct TreeNode *root){
    if(root==NULL){
        return 0;
    }
    int left=countcoins(root->left);
    int right=countcoins(root->right);
    res+=abs(left)+abs(right);
    return root->val -1 +left+right;
  }
int distributeCoins(struct TreeNode* root) {
    res=0;
    countcoins(root);
    return res;
}