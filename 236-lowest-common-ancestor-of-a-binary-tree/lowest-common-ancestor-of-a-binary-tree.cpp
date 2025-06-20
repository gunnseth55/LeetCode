/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool find_ancestor( TreeNode *root, TreeNode *curr, vector<TreeNode*> & arr){
    if(root==NULL){
        return false;
    }
    arr.push_back(root);
    if(root==curr){
        return true ;
    }
     if(find_ancestor(root->left, curr, arr)||find_ancestor(root->right,curr,arr))
     return true;

     arr.pop_back();
    return false;
 }
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*> one;
        vector <TreeNode*> two;
        TreeNode *res=nullptr;
        if(find_ancestor(root, p, one) && find_ancestor(root,q,two)){
            int n=min(one.size(),two.size());
            for(int i=0;i<n;i++){
                    if(one[i]==two[i]){
                        res=one[i];
                    }else{
                        break;
                    }
            }
        }
        return res;
    }
};