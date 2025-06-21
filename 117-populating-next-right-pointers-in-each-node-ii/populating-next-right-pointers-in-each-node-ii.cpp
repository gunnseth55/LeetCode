/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
void levelorder(Node *root, vector<vector<Node*>> &level){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<Node*> curr;
        for(int i=0;i<n;++i){
            Node *temp=q.front();
            q.pop();
            curr.push_back(temp);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        level.push_back(curr);
            
        }
    }
class Solution {
public:
    Node* connect(Node* root) {
        vector<vector<Node*>> arr;
        levelorder(root, arr);
        int n=arr.size();
        for(const auto& arr:arr){
            int sizee=arr.size();
            for(int i=0;i<sizee-1;i++){
                arr[i]->next=arr[i+1];
            }
            arr[sizee-1]->next=nullptr;
        }
        return root;
    }
};