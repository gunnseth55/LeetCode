/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int height(struct TreeNode *root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return left>right?(left+1):(right+1);
 }
int diameterOfBinaryTree(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int leftdiameter=diameterOfBinaryTree(root->left);
     int rightdiameter=diameterOfBinaryTree(root->right);
     int x=leftdiameter>rightdiameter?leftdiameter:rightdiameter;
     int y=leftheight+rightheight;
     return x>y?x:y;
}