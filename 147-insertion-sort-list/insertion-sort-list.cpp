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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>d;
        while(head){
            d.push_back(head->val);
            head=head->next;
        }
        sort(d.begin(),d.end());
        ListNode *h=new ListNode(0);
        ListNode *temp=h;
        for(auto i:d){
            temp->next=new ListNode(i);
            temp=temp->next;
        }
        return h->next;
    }
};