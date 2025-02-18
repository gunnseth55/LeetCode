/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode *merge(struct ListNode *first, struct ListNode *second){
  
    struct ListNode temp;
    struct ListNode *result=&temp;
    temp.next=NULL;
    
    while(first!=NULL && second !=NULL){
        if(first->val<second->val){
            result->next=first;
            first=first->next;
         
        }else{
            result->next=second;
            second=second->next;
        }
        result=result->next;
    }
        if(second!=NULL){
           result->next=second;  
        }else{
            result->next=first; 
        }
        return temp.next;
 }
struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL  || head->next==NULL){
        return head;
    }
     struct ListNode *slow=head;
     struct ListNode *fast=head;
     struct ListNode *prev=NULL;
     struct ListNode *first=head;
     while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
     }
     if(prev!=NULL){
     prev->next=NULL;
     }
     struct ListNode *second=slow;
     
    first=sortList(first);
   second=sortList(second);
     return merge(first,second);
 
}
 
