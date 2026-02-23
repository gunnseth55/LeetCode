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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
        if(root!=NULL)q.push(root); int zz=0;
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode  *x=q.front();
                q.pop();
                temp.push_back(x->val);
               
                    if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
               
            }
            if(zz%2!=0){
                reverse(temp.begin(),temp.end());
                result.push_back(temp);
            }else{
                 result.push_back(temp);
            }
           zz++;
            temp.clear();
        }
        return result;

    }
};