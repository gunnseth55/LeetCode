/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

   int findindex(int *inorder, int start, int end, int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
  }
  struct TreeNode * build(int *preorder, int *inorder, int start, int end,int *preindex){
    if(start>end){
        return NULL;
    }
    struct TreeNode *root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val=preorder[*preindex];
    root->left=NULL;
    root->right=NULL;
    (*preindex)++;

    int index=findindex(inorder,start,end,root->val);
    root->left=build(preorder,inorder,start,index-1,preindex);
    root->right=build(preorder,inorder,index+1,end,preindex);
    return root;
  }


struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    int preindex=0;
    return build(preorder,inorder,0,inorderSize-1,&preindex);
}