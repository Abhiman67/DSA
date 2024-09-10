#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// stacks using arrays
class stack{

    int top=-1;
    int arr[10];

    void push(int n){
        
          if(top>10) cout << "size is large ";
        top=top+1;
        arr[top]=n;   

    }

    int top(int n){
        if(top==-1) cout << "windows error";
        return arr[top];
    }
    
    void pop (int m){
        if(top==-1) cout << "windows error";
        top=top-1;
        
    }


};


// stack using ll

class stack {
  Node*top=NULL;
  int size=0;
 void  push (int n){
    Node*temp=new Node(n);
    temp->next=top;
    top=temp;
    size=size+1;

  }

 void  pop (int n){
    Node*temp=top;
    top=top->next;
    delete temp;
    size=size-1;

  }

  int top(){
    return top->data;

  }

};

///// STACK USING QUEUE

class stack {
    queue<int>qu
    push(int n){
        int size=qu.size();
        q.push(n);

        for(int i=1;i<qu.size();i++){
            qu.push(q.top());
            qu.pop();
            
        }
    }
};