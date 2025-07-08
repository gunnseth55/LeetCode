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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *result=new ListNode(0);
        ListNode *dummy=result;
       head=head->next;
        while(head!=NULL){
            int sum=0;
            while(head!=NULL && head->val!=0){
                sum+=head->val;
                head=head->next;
            } 
            if(sum!=0) {
                dummy->next=new ListNode(sum);
                dummy=dummy->next;
            }
            head=head->next;
        }
        return result->next;
    }
};