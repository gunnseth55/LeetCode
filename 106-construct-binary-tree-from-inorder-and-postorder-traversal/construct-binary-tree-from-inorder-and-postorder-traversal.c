/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int findindex(int *inorder,int start, int end, int val){
for(int i=start;i<=end;i++){
    if(inorder[i]==val){
        return i;
    }
}
return -1;
 }
  struct TreeNode *build(int *inorder, int *postorder, int start,int end,int *postindex){
if(start>end){
    return NULL;
}
struct TreeNode *root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val=postorder[*postindex];
    root->right=NULL;
    root->left=NULL;
    (*postindex)--;
int index=findindex(inorder,start,end,root->val);
    if(index==-1){
    return NULL;
    }
    root->right=build(inorder,postorder,index+1,end,postindex);
    root->left=build(inorder,postorder,start,index-1,postindex);
    
    return root;
  }
struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
    int postindex=postorderSize-1;
    return build(inorder,postorder,0,inorderSize-1,&postindex);
   
}