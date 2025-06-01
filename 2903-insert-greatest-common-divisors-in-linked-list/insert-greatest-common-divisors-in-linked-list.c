/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int gcd(int a, int b){
    while(b>0){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
 }
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *temp=head;
    while(temp->next!=NULL){
        struct ListNode *newn=(struct ListNode*)malloc(sizeof(struct ListNode));
         newn->val=gcd(temp->val,temp->next->val);
         newn->next=temp->next;
        temp->next=newn;
       temp=temp->next->next;
    }
    return head;
}