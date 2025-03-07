/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
  void inorder(struct TreeNode *root, struct TreeNode **first, struct TreeNode **second, struct TreeNode **prev){
if(root==NULL){
    return ;
}
inorder(root->left, first,second,prev);
 if((*prev) && (*prev)->val >root->val){
    if(*first ==NULL){
        *first=*prev;
    }
    *second=root;
 }
*prev=root;
inorder(root->right, first,second,prev);
  }
void recoverTree(struct TreeNode* root) {
   struct TreeNode *first=NULL;
   struct TreeNode *prev=NULL;
   struct TreeNode *second=NULL;
   inorder(root, &first,&second,&prev);
    if(first &&second){
         int temp=first->val;
         first->val=second->val;
         second->val=temp;
    }
}