/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
bool ancestor(TreeNode *root, TreeNode *curr, vector<TreeNode*> &arr){
if(root==NULL)return false;
arr.push_back(root);
if(root==curr)return true;
if(ancestor(root->left,curr,arr)||ancestor(root->right,curr,arr))return true;

arr.pop_back();
return false;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*>one,two;
        TreeNode *res=NULL;
        if(ancestor(root,p,one)&& ancestor(root,q,two)){
            int n=min(one.size(),two.size());
            for(int i=0;i<n;i++){
                if(one[i]==two[i]){
                    res=one[i];
                }
            }
        }
        return res;
    }
};