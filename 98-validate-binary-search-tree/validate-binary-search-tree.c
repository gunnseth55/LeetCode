/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool validate(struct TreeNode *root,long min,long max){
    if(root==NULL){
        return true;
    }
    if(root->val<=min || root->val>=max){
        return false;
    }
    return validate(root->left,min,root->val)&& validate(root->right,root->val,max);
 }
bool isValidBST(struct TreeNode* root) {
   return validate(root,LONG_MIN,LONG_MAX);
}
