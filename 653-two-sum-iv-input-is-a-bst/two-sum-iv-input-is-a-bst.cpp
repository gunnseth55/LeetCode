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
void order(TreeNode *root,vector<int> &arr ){
    if(root==NULL)return;
    
    order(root->left,arr);
    arr.push_back(root->val);
    order(root->right,arr);
}
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        order(root,arr);
        if(arr.size()<=1)return false;
        int n=arr.size();
        int left=0,right=n-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==k)return true;
            if(sum>k)right--;
            if(sum<k)left++;
        }

        return false;
    }
};