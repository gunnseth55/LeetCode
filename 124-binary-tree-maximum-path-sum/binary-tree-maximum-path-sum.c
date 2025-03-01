/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int pathsum(struct TreeNode *node, int *sum){
    if(node==NULL){
        return 0;
    }
    int leftsum=pathsum(node->left,sum);
    int rightsum=pathsum(node->right,sum);
    leftsum=leftsum>0?leftsum:0;
    rightsum=rightsum>0?rightsum:0;
    int current=node->val+leftsum+rightsum;
if(current>*sum){
  *sum=current;
}
return node->val+(leftsum>rightsum?leftsum:rightsum);

 }
int maxPathSum(struct TreeNode* root) {
    int maxsum=INT_MIN;
    pathsum(root,&maxsum);
    return maxsum;
}