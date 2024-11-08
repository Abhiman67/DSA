#include<iostream>
using namespace std;

class Heap{

public:
int arr[100001];
int size=0;
int capacity;

void maxinsert(int val){ 
    
    size=size+1;
    int index=size;
    arr[index]=val;
    
    while(index>1){
        int parent=index/2;
        if(arr[index]>arr[parent]){
            swap(arr[index],arr[parent]);
       }
       else {
        return ;
       }
    } 
}
 void print () {
        for(int i=1;i<=size;i++){
            cout << arr[i] << " ";
        }
    }

void delete (){
    if(size==0){
        cout << "heap is empty";
        return;
    }
    arr[1]=arr[size];f 
    size--;
    int i=1;
    int ldx=2*i;
    int rdx= 2*i +1;
   while (i<size){
    if(arr[i]<arr[ldx]&&arr[ldx]>arr[rdx]&&ldx<size){
        swap (arr[i],arr[ldx]);
        i=ldx;
    }
    if(arr[i]<arr[rdx]&&arr[ldx]<arr[rdx]&&rdx<size){
        swap(arr[i],arr[rdx]);
        i=rdx;
    }
   }
}    
};

int main (){

    Heap h;
    h.maxinsert(60);
    h.maxinsert(50);
    h.maxinsert(40);
    h.maxinsert(30);
    h.maxinsert(20);
    h.print();


}