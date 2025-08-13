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
TreeNode *insert(TreeNode *root,int val){
if(root==NULL)return new TreeNode (val);
if(root->val<val)root->right=insert(root->right,val);
else if(root->val>val)root->left=insert(root->left,val);
return root ;
}
void inorder(TreeNode *root,vector<int>&ans){
    if(root==NULL)return;
inorder(root->left,ans);
ans.push_back(root->val);
inorder(root->right,ans);

}
    void recoverTree(TreeNode* root) {
        vector<int>arr;
        inorder(root,arr);
        sort(arr.begin(),arr.end());
        TreeNode *temp=new TreeNode (arr[0]);
        for(int i=1;i<arr.size();i++){
            temp=insert(temp,arr[i]);
        }
       int idx = 0;
        function<void(TreeNode*)> refill = [&](TreeNode* node) {
            if (!node) return;
            refill(node->left);
            node->val = arr[idx++];
            refill(node->right);
        };
        refill(root);
    }
};