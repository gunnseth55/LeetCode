/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void sum(struct TreeNode *n,int curr,int *total){
    if(n==NULL ){
        return ;
    }
    curr=(curr*10)+n->val;
    if(n->left==NULL && n->right==NULL){
    *total+=curr;
    return;
    }
    sum(n->left,curr,total);
    sum(n->right,curr,total);

}

int sumNumbers(struct TreeNode* root) {
    int total=0;
   sum(root,0,&total);
    return total;
}