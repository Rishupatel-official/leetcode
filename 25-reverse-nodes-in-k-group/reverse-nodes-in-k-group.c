/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* temp=head;
    if(!temp || !temp->next){
        return head;
    }
    int count=0;
    while(temp){
        temp=temp->next;
        count++;
    }
    if(count<k){
        return head;
    }
    else{
        int i=0;
        struct ListNode*current=head,*next=NULL,*pre=NULL;
        while(current && i<k){
            next=current->next;
            current->next=pre;
            pre=current;
            current=next;
            i++;
        }
        head->next=reverseKGroup(current,k);
        return pre;
        
    }return head;
}