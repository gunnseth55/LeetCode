/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *temp=NULL;
    struct ListNode *temp1=NULL;
    struct ListNode *current=head;
    
    while(current!=NULL){
        temp1=current->next;
        current->next=temp;
        temp=current;
        current=temp1;
    }

    return temp;
}