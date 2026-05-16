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
    int solve(TreeNode *root, int &dia){
        if(root==NULL)return 0;
        int l=solve(root->left,dia);
        int r=solve(root->right,dia);
        dia=max(dia, l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int dia=0;
        solve(root,dia);
        return dia;
    }
};