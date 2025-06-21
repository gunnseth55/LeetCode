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

 int maxx=INT_MIN;
  int dfs_traversal(TreeNode *root){
    if(root==NULL){
        return 0;
    }
    int left=max(0,dfs_traversal(root->left));
    int right=max(0,dfs_traversal(root->right));
    int path=root->val+left+right;
    maxx=max(maxx,path);
    return root->val+max(left,right);
     

  }
    int maxPathSum(TreeNode* root) {
       dfs_traversal(root);
       return maxx;
    }
};