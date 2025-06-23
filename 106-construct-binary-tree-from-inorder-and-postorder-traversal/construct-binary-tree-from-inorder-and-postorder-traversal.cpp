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
    TreeNode *build(vector<int>&inorder, vector<int> &postorder, int start, int end,int &postindex){
        if(start>end){
                return NULL;
        }
        int rootval=postorder[postindex--];
        TreeNode * root=new TreeNode (rootval);
        int inindex=start;
        for(int i=start;i<=end;i++){
                if(inorder[i]==rootval){
                    inindex=i;
                    break;
                }
        }
       
        root->right=build(inorder,postorder,inindex+1,end,postindex);
         root->left=build(inorder,postorder,start,inindex-1,postindex);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postindex=postorder.size()-1;
       return  build(inorder,postorder,0,postorder.size()-1,postindex);
    }
};