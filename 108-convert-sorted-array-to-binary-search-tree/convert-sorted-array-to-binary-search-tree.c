/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
  struct TreeNode *createNode(int val){
   struct TreeNode *temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));  
     temp->val = val;    
    temp->left=NULL;
    temp->right=NULL;
    return temp;
 }

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize <= 0) {
        return NULL;
    }
    int middle = numsSize / 2;
    struct TreeNode *head = createNode(nums[middle]);

    
    int leftSize = middle;
    int rightSize = numsSize - middle - 1;

    head->left = sortedArrayToBST(nums, leftSize);
    head->right = sortedArrayToBST(nums + middle + 1, rightSize);
    return head;
}