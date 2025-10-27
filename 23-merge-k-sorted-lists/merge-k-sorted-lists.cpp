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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &a:lists){
            while(a!=NULL){
                pq.push(a->val);
                a=a->next;
            }
        }
        ListNode *dum=new ListNode(-1);
        ListNode *temp=dum;
        while(!pq.empty()){
            temp->next=new ListNode(pq.top());
             pq.pop();
            temp=temp->next;
        }
        return dum->next;
    }
};