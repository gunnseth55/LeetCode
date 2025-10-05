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
int count(ListNode *head){
    int c=0;
    while(head!=NULL){
        head=head->next;
        c++;
    }
    return c;
}
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        int c=count(head)/2;
        ListNode *prev=nullptr;
        int cc=0;

        ListNode *temp=head;
        while(cc<c){
            prev=temp;
           temp=temp->next;
            cc++;
           
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};