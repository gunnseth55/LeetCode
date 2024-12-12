/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
bool hasCycle(struct ListNode *head) {
    if(head==NULL || head->next==NULL){
        return false;
    }
   
    struct ListNode *temp=head,*ptr=head;
    while(temp!=NULL&&temp->next!=NULL){
        ptr=ptr->next;
        temp=temp->next->next;
            if(ptr==temp){
                return true;
            }
    }
    return false;
}