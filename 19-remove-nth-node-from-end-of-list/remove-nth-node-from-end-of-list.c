/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int count(struct ListNode *head) {
    int count = 0;
    struct ListNode *temp = head;
    while (temp!= NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int t=count(head);
    if(t==n){
        struct ListNode *temp=head;
        head=head->next;
        free(temp);
        return head;
    }
   
    struct ListNode *temp=head;
   for(int i=0;i<t-n-1;i++){
    temp=temp->next;
   }
    struct ListNode *delete=temp->next;
    temp->next=temp->next->next;
    free(delete);
    return head;
}