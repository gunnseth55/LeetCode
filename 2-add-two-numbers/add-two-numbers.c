/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *create(int val){
    struct ListNode *newn=(struct ListNode*)malloc(sizeof(struct ListNode));
    newn->next=NULL;
    newn->val=val;
    return newn;
     }
 struct ListNode *append(struct ListNode *head,int val){
    struct ListNode *newn=create(val);
    if(head==NULL){
        head=newn;
    }
    else{
        struct ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newn;
    }
    return head;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  
    struct ListNode *res=NULL;
    int carry=0;
    while(l1!=NULL ||l2!=NULL|| carry!=0){
      
        int sum=carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
        }
       if(l2!=NULL){
          sum+=l2->val;
            l2=l2->next;
            
        }
       carry=sum/10;
       res=append(res,sum%10);
    }

    return res;
}