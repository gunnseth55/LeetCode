/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 int count(TreeNode *root){
    if(root==NULL){
        return 0;
    }
   return 1+count(root->left)+count(root->right);
 }
class Solution {
public:
    int countNodes(TreeNode* root) {
        return count(root);
    }
};