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
    if ( head ==NULL ||k==0) return head;
    int ct=count(head);
    struct ListNode *temp=head;
    k=k%ct;
    if(k==0)return head;
    for(int i=0;i<ct-k-1;i++){
        head=head->next;
    }
    struct ListNode* new=head->next;
    head->next=NULL;
    struct ListNode* last=new;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=temp;
    return new;
}