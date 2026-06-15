Node*t1= list1;
Node*t2= list2;

Node*dummy=new node(-1);
Node*temo=dummy;

while(t1!=NULL && t2!=NULL){

    if(t1->val<t2->val){

        temp->next=t1;
        temp=t1;
        t1=t1->next;
    }
    else{

           temp->next=t2;
           temp=t2;
           t2=t2->next;

    }

    if(t1)
}
