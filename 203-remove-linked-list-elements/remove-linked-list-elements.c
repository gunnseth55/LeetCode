/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
   struct ListNode *p=(struct ListNode *)malloc(sizeof(struct ListNode));
   p->next=head;
    struct ListNode *ptr=p;

    while(ptr->next!=NULL){
      
        if(ptr->next->val==val){
           struct ListNode *temp=ptr->next;
            ptr->next=ptr->next->next;
           free(temp);
        }
        else{
           ptr=ptr->next;
        }
    }
    return p->next;
}