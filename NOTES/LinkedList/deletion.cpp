/// deletion of an element 

Node*DeletionByPosition(Node*head,int pos){

    if(head==NULL ) return NULL;

    int cnt=0;

    Node*temp=head;

    while(temp->next!=NULL){

        if(cnt==k-1){

            temp->next=temp->next->next;

            delete temp;
            break;


        }

        prev=temp;
        temp=temp->next; 

    }
}