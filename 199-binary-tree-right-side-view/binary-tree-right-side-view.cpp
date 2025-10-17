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
void solve(TreeNode *root, int level, int &maxx, vector<int>&result){
    if(root==NULL)return;
    if(level>maxx){
        result.push_back(root->val);
        maxx=level;
    }
    solve(root->right,level+1,maxx,result);
    solve(root->left,level+1,maxx,result);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        int maxx=-1;
        solve(root,0,maxx,result);
        return result;
    }
};