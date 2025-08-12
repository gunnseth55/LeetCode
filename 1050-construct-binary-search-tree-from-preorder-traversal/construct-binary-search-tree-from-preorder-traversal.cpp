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
TreeNode * insert(TreeNode *root, int val){
    if(root==NULL)return new TreeNode(val);
    if(root->val>val)root->left=insert(root->left,val);
    if(root->val<val)root->right=insert(root->right,val);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        if(n==0)return NULL;
        TreeNode *root=new TreeNode(preorder[0]);
        for(int i=1;i<n;i++){
           root= insert(root,preorder[i]);
        }
        return root;
    }
};