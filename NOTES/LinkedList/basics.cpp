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




/// insertion at head


Node*newnode=new node(val);

newnode->next=head;
head=newnode;


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
temp->next=NULl 

return head;
}



/// DELETE KTH ELEMENT FROM LIST

Node* DeletAtPosition(Node*head,int position){

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



    while(temp->data != value){
        
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