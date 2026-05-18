/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     map<Node*,Node*>m;
      Node *dummy=head;
    
    while(dummy){
        m[dummy]=new Node(dummy->val);
        dummy=dummy->next;
    }
  
   dummy=head;
   while(dummy){
      
       m[dummy]->next=m[dummy->next];
       m[dummy]->random=m[dummy->random];
       dummy=dummy->next;
    }   
    return m[head];
    }
};