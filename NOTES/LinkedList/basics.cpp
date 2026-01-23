#include<iostream>
using namespace std;
// single linked list
class Node{

    public:
    int data;
    Node*next;

    Node(int data1 ,Node*next1){

        data=data1;
        next=next1;
    }

    Node(int data1){

        data=data1;
        next=nullptr;

    }
};

/// traversing linkedlist 

void Print(Node*head){

    while(head !=NULL){

        cout<< head->data;
        head=head->next;

    }
    cout <<endl;
}



int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}






/// deletion of head

if(head=temp )return NULL ;
 
Node*temp=head;

head=head->next;
delete temp;

return head;

/// delete tail 


Node*RemoveTail(Node*head){
 

if(Head == NULL || head->next==NULL) return head;

Node*temp= head;

while(temp->next->next!=NULL){

    temp=temp->next;

}
delete temp->next ;
temp->next=NULL;

return head;
}



/// DELETE KTH ELEMENT FROM LIST

Node* DeletAtPosition(Node*head,int k){

    if(head==NULL) return head;
    
    if(k==1){

        Node*temp=head;
        head=head->next;
        delete temp;
        return head;

    }


    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp->data != k){
        
        cnt++;

        if(cnt==k){

            prev->next=prev->next->next;
            delete temp;
            break;

        }
        prev=temp;
        temp=temp->next;

    }
    return head;
}


///delete as on the basis of the value 

Node *RemoveElement(Node*head,int el ){

    if(head==NULL) return head;

    if(head->data == el){

        Node*temp=head;
        head=head->next;

        delete temp;
        return head;
 
    }


    Node*temp=head;
    Node*prev=NULL ;

    while(temp!=NULL){

        if(temp->data == el){

            prev->next=prev->next->next;
            delete temp;
            break;

        }
        prev=temp;
        temp=temp->next;

    }
    return head;
    
}


//// INSERT AT HEAD 
Node*newnode=new node(val);

newnode->next=head;
head=newnode;

///INSERT AT LAST

Node*InsetAtLast(Node*head,int val){

    Node*temp=head;

     while(temp->next!=NULL){

     temp=temp->next;

    
    }
    Node*newnode= new Node(val);
    temp->next=newnode;
    

    return head;
    
}


/// insert at position 

Node*InsertAtPosition(Node*head,int Pos,int val){

    if(head==NULL){

        if(Pos==1) return Node*newnode=new Node(val);
        else return NULL;
        
    }

    if(k==1){


       Node*newnode=new node(val);
       newnode->next=head;
       newnode=head;

       return head;
    }

    while(temp!=NULL){

        int cnt=1;
        if(cnt==Pos-1){

            Node*newnode=new node(val);
            newnode->next=temp->next;
            temp->next=newnode;
            break;

        }

        temp=temp->next;

    }
    return head ;
    
}
