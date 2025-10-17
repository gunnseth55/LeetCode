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
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            

            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                 if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            }
            res.push_back(temp);
           
           

        }
        int maxx=INT_MIN,index=-1;
        for(int i=0;i<res.size();i++){
            int sum=0;
            for(int val:res[i]){
                sum+=val;
            }
            if(sum>maxx){
                maxx=sum;
                index=1+i;
            }
        }
        return index;
    }
};