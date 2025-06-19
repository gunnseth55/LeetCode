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
 void preorder(TreeNode *root, vector<TreeNode*> &arr){
    
    if(root==NULL){
        return ;
    }
    
    arr.push_back(root);
    preorder(root->left,arr);
    preorder(root->right,arr);
    
 }
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
        return;
        vector<TreeNode*> arr;
        preorder(root,arr);
        int i=0;
        for(int i=0;i<arr.size()-1;++i){
            arr[i]->left=nullptr;
            arr[i]->right=arr[i+1];
        }
        if(!arr.empty()){
            arr.back()->left=nullptr;
            arr.back()->right=nullptr;
        }
    }
};