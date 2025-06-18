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


  void preorder( TreeNode *root,vector<int> &arr){
    if(root==nullptr){
        arr.push_back(INT_MIN);
        return ;
    }
    arr.push_back(root->val);
    preorder(root->left,arr);
    preorder(root->right,arr);
    
  }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>arr ;
        preorder(p,arr);
        vector<int>brr;
        preorder(q,brr);
        for(int i=0;i<arr.size()||i<brr.size();i++){
            if(arr[i]!=brr[i]){
                return false;
            }
        }
        return true;
    }
};