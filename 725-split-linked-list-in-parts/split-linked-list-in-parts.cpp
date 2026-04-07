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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>result(k,nullptr);
        ListNode *dummy=head;
        int count=0;
        while(dummy){
            count++;
            dummy=dummy->next;
        }
        int y=count/k;
        int x=count%k;
        ListNode *curr=head;
       for(int i=0;i<k;i++){
        if(!curr)break;
        result[i]=curr;
        int cs=y+(x>0?1:0);
        x--;
        for(int i=1;i<cs;i++){
            curr=curr->next;
        }
        ListNode* next=curr->next;
        curr->next=NULL;
        curr=next;
       }
        return result;
    }
};