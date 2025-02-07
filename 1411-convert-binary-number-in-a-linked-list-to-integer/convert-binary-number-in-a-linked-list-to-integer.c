/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode *temp=head;
    int count=0;
    int sum=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        count--;
        sum+=temp->val*(pow(2,count));
        temp=temp->next;
    }
    return sum;
}