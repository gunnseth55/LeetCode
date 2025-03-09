/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode *current=head;
    struct ListNode *sorted=NULL;
    while(current!=NULL){
        struct ListNode *next=current->next;
        if(sorted==NULL || sorted->val>=current->val){
            current->next=sorted;
            sorted=current;
        }else{
            struct ListNode *temp=sorted;
            while(temp->next!=NULL && temp->next->val<current->val){
                temp=temp->next;
            }
current->next=temp->next;
        temp->next=current;
        }
        current=next;
    }
    return sorted;
}