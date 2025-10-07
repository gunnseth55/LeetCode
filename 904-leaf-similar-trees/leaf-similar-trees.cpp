/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<int> &result) {
        
     
      if(!root)return ;
      if(!root->left && !root->right)result.push_back(root->val);
      solve(root->left,result);
      solve(root->right,result);
      
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a ,b;
        solve(root1,a);
         solve(root2,b);
        return a == b;
    }
};