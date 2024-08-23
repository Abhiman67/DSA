#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class ListNode {
    public:

    int data;
    ListNode*Next;

    ListNode(int n){ 
        
        data=n;
        Next=NULL;

    }
    ~ListNode(){
        if(Next != NULL){
            delete Next;
            free(Next);

            Next=NULL;
        }
    }

 
};

class List {
    public:
    ListNode*head;
    ListNode*tail;

    List(){
        head=NULL;
        tail=NULL;


    };
class Solution{
public:

ListNode*add2nums(ListNode*l1,ListNode*l2){
    ListNode*dummynode=new ListNode(-1);
    ListNode*curr=dummyhead;
    int carry=0;
    t1=l1,t2=l2;
    while(l1!=NULL || l2!=NULL){
        sum=carry;
        if(l1) sum+= l1->data;
        if(l2) sum += l2->data;

        ListNode*newnode=new ListNode(sum%10);
        carry=sum/10;

        curr->next=newnode;
        curr=curr->next;

        if(l1) l1=l1->next;
        if(l2)  l2=l2->next;

        if(carry){
            ListNode*newnode= new ListNode(carry);
            curr->next=newnode;

        }
        return dummyhead->next;
    }

}

};
