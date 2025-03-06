/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode *createnode(int key){
    struct TreeNode *newn=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    newn->val=key;
    newn->left=NULL;
    newn->right=NULL;
    return newn;
 }
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    struct  TreeNode *newn=createnode(val);
    if(root==NULL){
        return newn;
    }
    struct TreeNode *parent=NULL;
    struct TreeNode *current=root;
    while(current!=NULL){
        parent=current;
        if(current->val>val){
            current=current->left;
        }else if(current->val<val){
            current=current->right;
        }
    }
    if(parent->val>val){
        parent->left=newn;
    }else if (parent->val<val){
        parent->right=newn;
    }
    return root;
}