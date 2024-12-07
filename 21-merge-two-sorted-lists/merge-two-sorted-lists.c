/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *createnode(int value){
struct ListNode *newn=(struct ListNode*)malloc(sizeof(struct ListNode));
newn->val=value;
newn->next=NULL;
return newn;
};
struct ListNode *append(struct ListNode *head,int value){
struct ListNode *newn=createnode(value);
if(head==NULL){
    return newn;
}
struct ListNode *temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newn;
return head;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *result=NULL;
    while(list1!=NULL &&list2!=NULL){
            if(list1->val<list2->val){
                result=append(result,list1->val);
                list1=list1->next;
            }else if(list1->val>list2->val){
                 result=append(result,list2->val);
                list2=list2->next;
            }else if(list1->val==list2->val){
                 result=append(result,list1->val);
                 result=append(result,list2->val);
                list1=list1->next;
                list2=list2->next;
            }
    }
    while(list1!=NULL){
       result=append(result,list1->val);
        list1=list1->next;
    }while(list2!=NULL){
        result=append(result,list2->val);
        list2=list2->next;
    }
    return result;
}