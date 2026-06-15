// METHOD 1 USING HASHMAP


//METHOD 2
using TC O(N) SC O(1)
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
//         ListNode*temp=headA;
//        int cnt1 = 0, cnt2 = 0;

//         while(temp!=NULL){

//           cnt1++;
//             temp=temp->next;
//         }

//         temp=headB;
//         while(temp!=NULL){

//             cnt2++;
//             temp=temp->next;
//         }


//         int d = abs(cnt1 - cnt2);

//         ListNode* t1 = headA;
//         ListNode* t2 = headB;

        
//         if(cnt1 > cnt2){
//             while(d--) t1 = t1->next;
//         } else {
//             while(d--) t2 = t2->next;
//         }

//         while(t1 && t2){
//             if(t1 == t2) return t1;
//             t1 = t1->next;
//             t2 = t2->next;
//         }

//         return NULL;
//     }
// };


/// METHOD 3 USING 