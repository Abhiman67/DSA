#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*Next;

    Node(int d){
        data=d;
        Node*Next=NULL;

    }

    ~Node(){

        int value = data;
        if (Next!=NULL){
            delete Next;
           Next=NULL;

        } 
    }
};

void InsertNode(Node*&Tail,int element,int d ){
    if(Tail==NULL){
        Node *newnode=new Node(d);
        Tail=newnode;
        newnode->Next=newnode;

    }
    else{

        Node*curr = Tail;

        while (curr->data!=element)
        {
            curr=curr->Next;

        }
        Node*temp = new Node(d);
        temp->Next=curr->Next;
        curr->Next=temp;
        

    }
}

void DeleteNode(Node *&Tail,int val){
    Node*prev=Tail;
    Node*curr=prev->Next;

    while (curr->data!=val)
    {

        prev->Next=curr->Next;
        curr->Next=NULL;
        free(curr);

   }
    

}

void ReverseLinkList(Node*&Head){
    Node*prev=NULL;
    Node*curr=Head;
    Node*forward=NULL;
    while(curr!=NULL){

            forward=curr->Next;
            curr->Next=prev;
            prev=curr;
            curr=forward;
    }
}