// odd even indices
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

/// IN BRUTE FORCE SIMPLY THROUGH ARRAY WE WILL FISRT INSERT ODD ELEMENTS THEN WE WILL INCLUDE EVEN ELEMENTS



class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       
       
       if(head==NULL || head->next==NULL){
        return head;
     }
     
     
     ListNode*odd=head;
     ListNode*even=head->next;
     ListNode*evenHead=head->next;
     
     
    // while(even!=NULL && even->next!=NULL){
            while(odd -> next != NULL && even -> next != NULL){

        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;

     }
     odd->next=evenHead;
     return head;
    }
};