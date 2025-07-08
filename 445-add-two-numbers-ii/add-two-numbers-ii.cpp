/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

     

      ListNode * reverse(ListNode *node){
            if(node==NULL){
                return NULL;
            }
            ListNode *prev=NULL;
            ListNode *curr=node;
            while(curr!=NULL){
                ListNode *next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            return prev;
        }



    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        int carry=0;
         ListNode *result=new ListNode(0);
         ListNode *temp=result;
         while(l1 || l2 ||carry){
        
int sum=carry;
if(l1!=NULL){
    sum+=l1->val;
    l1=l1->next;
}
if(l2!=NULL){
    sum+=l2->val;
    l2=l2->next;
}
temp->next=new ListNode(sum%10);
temp=temp->next;
carry=sum/10;
         }
         return reverse(result->next);
    }
};