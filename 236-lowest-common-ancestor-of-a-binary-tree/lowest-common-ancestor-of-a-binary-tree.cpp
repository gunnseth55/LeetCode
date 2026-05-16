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
    bool find(TreeNode *root, TreeNode *target, vector<TreeNode*>&vec){
        if(root==NULL)return false;
        vec.push_back(root);
        if(root==target)return true;
       
        if(find(root->left,target,vec)||find(root->right, target, vec)){
            return true;
        }
        vec.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>one;
        vector<TreeNode*>two;
        TreeNode *res=nullptr;
        if(find(root,p, one)&& find(root,q,two)){
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