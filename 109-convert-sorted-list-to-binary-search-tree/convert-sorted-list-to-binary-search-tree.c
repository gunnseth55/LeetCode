/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int countN(struct ListNode *root){
    struct ListNode *temp=root;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
 }
 struct TreeNode *createNode(int val){
struct TreeNode *temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val = val;    
    temp->left=NULL;
    temp->right=NULL;
    return temp;
 }
 struct ListNode* getMiddle(struct ListNode* head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *prev = NULL;
    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL) {
        prev->next = NULL;
    }
    return slow;
}
struct TreeNode* sortedListToBST(struct ListNode* head) {
     if (head == NULL) {
        return NULL;
    }
    struct ListNode* mid = getMiddle(head);
    struct TreeNode* root = createNode(mid->val);
    if (head == mid) {
        return root;
    }
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(mid->next);
    return root;
}