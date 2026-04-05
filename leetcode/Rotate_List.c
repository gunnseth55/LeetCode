/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int count(struct ListNode *head){
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
 }
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL|| k==0)return head;
    int x=count(head);
    k=k%x;
    if(k==0)return head;
    struct ListNode *temp=head;
   for(int i=0;i<x-k-1;i++){
    temp=temp->next;
   }
   struct ListNode *new=temp->next;
   temp->next=NULL;
struct ListNode *end=new;
while(end->next!=NULL){
    end=end->next;
}
    end->next=head;
    return new;
    
}