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
    ListNode* sortList(ListNode* head) {
        deque<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        sort(arr.begin(),arr.end());
        ListNode *res=new ListNode(0);
        ListNode *temp=res;
        while(!arr.empty()){
            temp->next=new ListNode(arr.front());
            arr.pop_front();
            temp=temp->next;
        }
return res->next;
    }
};