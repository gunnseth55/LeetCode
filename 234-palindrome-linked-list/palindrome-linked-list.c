/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (!head) return true;
    struct ListNode * temp=head;
    
    int count=0;
   
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
     int *arr=(int*)malloc(count*sizeof(int));
     if(!arr)return false;
     temp=head;
   for (int i = 0; i < count; i++) {
        arr[i] = temp->val;
        temp = temp->next;
    }
    
    for(int i=0, j=count-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            free(arr);
            return false;
        }
    }
    return true;
}