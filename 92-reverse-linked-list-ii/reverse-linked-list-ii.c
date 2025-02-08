/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
if (!head || left == right) return head;

    struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next=head;
    struct ListNode *previous=temp;

    for(int i=1;i<left;i++){
        previous=previous->next;
    }
    struct ListNode *start=previous->next;
    struct ListNode *current=start->next;
    for(int i=0;i<right-left;i++){
       start->next = current->next;
        current->next = previous->next;
        previous->next = current;
        current = start->next;
    }
head=temp->next;
return head;
}