/// brute force 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        ListNode*temp=head;
        int cnt=0;

        if(head==NULL || head->next==NULL) return NULL;

        while(temp!=NULL){

            cnt++;
            temp=temp->next;

        }

        int target=cnt/2;
        
        temp=head;

        for(int i=0;i<target-1;i++){

            temp=temp->next;
        }

        temp->next=temp->next->next;

        return head;

        
    }
};

/// optimise solution 

 