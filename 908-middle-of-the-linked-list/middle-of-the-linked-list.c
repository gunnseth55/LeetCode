/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int countt(struct ListNode *head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
 }
struct ListNode* middleNode(struct ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode *temp=head;
    int count= countt(head);
    count=(count%2==0)?(count+1)/2: count/2;
    int x=0;
    while(x!=count){
        temp=temp->next;
        x++;
    }
    return temp;
}