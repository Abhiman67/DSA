#include<iostream>
using namespace std;

class Que{
    int size=10;
    int arr[size];
    int currsize=0;
    int start,end=-1;

    push(int n){

    }


};

/// using ll
class Node {

    Node*start,end;
    int size =0;

   

    push(int n){

        Node*temp= new Node(n);        
        if(start==NULL) {
            start=end=temp;

        }

        else (){
            end->next=temp;
            size=size+1;

        }

    }
    pop(int n){
        Node*temp=start;
        start=start->next;
        delete temp;
        size=size-1;
        


    }

}

    

