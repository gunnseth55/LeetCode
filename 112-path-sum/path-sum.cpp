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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        TreeNode *temp=root;
        int curr=0;
        
        if(root==NULL){
            return false;
        }
        if(root->left==NULL && root->right==NULL){
        if(root->val==targetSum)
        return true;
        }
       
return  hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right, targetSum-root->val);
    }

};