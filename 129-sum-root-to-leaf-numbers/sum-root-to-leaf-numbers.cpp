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
void  sum(TreeNode *root, int current, int & total){
 if(root==NULL){
 return ;
 }
 current=(current*10)+root->val;
 if(root->left==NULL && root->right==NULL){
 total+=current;
 return ;
 }

 sum(root->left,current,total);
 sum(root->right,current,total);

 }
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int total=0;
        sum(root,0, total);
        return total;
        
    }
};