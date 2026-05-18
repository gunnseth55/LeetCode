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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL) return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=dummy;
        while(prev->next && prev->next->next){
            ListNode *next1=prev->next;
            ListNode *next2=prev->next->next;
            next1->next=next2->next;
            next2->next=next1;
            prev->next=next2;
            prev=next1;

        }
        return dummy->next;
    }
};