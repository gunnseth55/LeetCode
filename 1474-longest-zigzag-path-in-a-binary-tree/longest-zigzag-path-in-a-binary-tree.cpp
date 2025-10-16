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
int solve(TreeNode *root, int depth, int dir){
    if(!root)return depth;
    if(dir==0){
        return max(solve(root->right,depth+1,1),solve(root->left,0,0));
    }else{
        return max(solve(root->left,depth+1,0),solve(root->right,0,1));
    }
}
    int longestZigZag(TreeNode* root) {
        return max(solve(root->left,0,0),solve(root->right,0,1));
    }
};