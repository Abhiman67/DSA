// brute force
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*temp=head;
        int cnt=0;

        while(temp!=NULL){

            cnt++;
            temp=temp->next;

        }

      if(n==cnt) return head->next;
        int target=cnt-n;

        temp=head;

        cnt=0;

    
       

        while(temp!=NULL){

            cnt++;
        
            if(cnt==target){
                 ListNode*dummy=temp->next;

                temp->next=temp->next->next;
                delete(dummy);

                break;
            }

            temp=temp->next;

            
        }

       

        return head;
    }
};


/// optimied

