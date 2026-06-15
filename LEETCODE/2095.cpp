// brute force 

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        int cnt=0;

        if(head==NULL || head->next==NULL) return NULL;
        ListNode*temp=head;

        while(temp!=NULL){
            
            cnt++;
            temp=temp->next;
        }

        int mid= cnt/2;
        temp=head;
        for(int i=0;i<mid-1;i++){

            temp=temp->next;

        }
        temp->next=temp->next->next;
        return head;
    }
};


/// now optimised one tortoise and hare method

 class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return NULL;

        ListNode*slow=head;
        ListNode*fast=head->next;

        while(fast->next!=NULL && fast->next->next!=NULL ){

            slow=slow->next;
            fast=fast->next->next;

        }

        slow->next=slow->next->next;

        return head; 
    }
};