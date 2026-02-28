TC :-> O(N)
SC :-> O(N)

// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
        
//         vector<int>odd;
//         vector<int>even;

//         if(head==NULL )return head;

//         ListNode*temp=head;

//         while(temp!=NULL && temp->next!=NULL){

//             odd.push_back(temp->val);

//             temp=temp->next->next;

//         }

//         if(temp->next) odd.push_back(temp->val);

//         temp=head->next;

//         while(temp!=NULL && temp->next!=NULL){

//             even.push_back(temp->val);

//             temp=temp->next->next;

//         }

//         if(temp->next) even.push_back(temp->val);

//         temp=head;

//         for(int x: odd){

//             temp->val=x;
//             temp=temp->next;

//         }

//         for(int x: even){

//             temp->val=x;
//             temp=temp->next;

//         }


//         return head;

//     }
// };

TC :-> O(N)
SC :-> O(1)

