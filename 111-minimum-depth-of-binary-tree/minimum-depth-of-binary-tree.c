/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int min(int a, int b){
    return a<b?a:b;
}
int minDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL){
        return 1+minDepth(root->right);
    }
     if(root->right==NULL){
        return 1+minDepth(root->left);
    }
    return 1+min(minDepth(root->left),minDepth(root->right));
}