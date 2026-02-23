  METHDO 1 ->  USING STACK  O(N) 

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {

//        ListNode*temp=head;

//        stack<ListNode*>st;



//         while(temp!=NULL){

//             st.push(temp);
//             temp=temp->next;
//         }

//         temp=head;



//         while(!st.empty()){

//             if(st.top()->val==temp->val){

//                 temp=temp->next;
//                 st.pop();
//             }

//             else{

//                 return false;
//             }


//         }


//         return true;
        
        
//     }
// };