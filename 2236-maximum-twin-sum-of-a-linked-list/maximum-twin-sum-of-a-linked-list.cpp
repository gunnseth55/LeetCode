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

    int pairSum(ListNode* head) {
        int c=0;
        if(head==NULL)return 0;
        vector<ListNode*>temp;
        while(head!=NULL){
            temp.push_back(head);
            head=head->next;
            c++;
        }
        if(c==2 && head && head->next )return (head->val+head->next->val);
        vector<pair<ListNode*,ListNode*>>pp;
        for(int i=0;i<c/2;i++){
            int x=c-i-1;
            pp.push_back(make_pair(temp[i],temp[x]));
        }
        int maxx=INT_MIN;
        for(auto &p:pp){
            int sum=p.first->val+p.second->val;
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};