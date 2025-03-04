/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct valid{
    int subtree;
   int sum;
   int max;
   int min;
 };
struct valid mAx(struct TreeNode *root,int *sum){
    if(root==NULL){
        return (struct valid){1,0,INT_MIN,INT_MAX};
    }

    struct  valid leftsum=mAx(root->left,sum);
   struct valid rightsum=mAx(root->right,sum);
   if (leftsum.subtree && rightsum.subtree && root->val > leftsum.max && root->val < rightsum.min){
    int currentsum=root->val+ leftsum.sum+rightsum.sum;
    if(currentsum>*sum){
        *sum=currentsum;
    }
    return (struct valid){1,currentsum,rightsum.max>root->val?rightsum.max:root->val,leftsum.min<root->val?leftsum.min:root->val};
   }else{
    return (struct valid){0,0,0,0};
   }
 }
int maxSumBST(struct TreeNode* root) {
    int sum=0;
    mAx(root,&sum);
return sum;
}