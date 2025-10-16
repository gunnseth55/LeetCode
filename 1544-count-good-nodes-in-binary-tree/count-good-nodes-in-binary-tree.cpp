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
void solve(int maxx, int &count, TreeNode *root){
    if(!root)return;
    if(root->val>=maxx){
        maxx=root->val;
        count++;
    }
    if(root->right)solve(maxx,count,root->right);
    if(root->left)solve(maxx,count,root->left);
}
    int goodNodes(TreeNode* root) {
        int count=0;
        solve(root->val,count,root);
        return count;
    }
};