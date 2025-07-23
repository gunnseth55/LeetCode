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
TreeNode *create(vector<int>&arr,int start,int end){

if(start==end){
return NULL;
}
int middle=start+(end-start)/2;
TreeNode *root=new TreeNode(arr[middle]);
root->left=create(arr,start,middle);
root->right=create(arr,middle+1,end);
return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return create(nums,0,n);
    }
};
