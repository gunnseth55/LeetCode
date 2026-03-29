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
    void solve(vector<string>&result, TreeNode *root, string temp){
        if(root==NULL)return;
        temp+=to_string(root->val);
        if(root->left==NULL && root->right==NULL)result.push_back(temp);
        
        if (root->left)solve(result,root->left,temp+"->");
        if(root->right)solve(result,root->right,temp+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>result;
        solve(result, root,"" );
        return result;
    }
};