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

int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}

