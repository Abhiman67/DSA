/// heap is complete BT
/// heap order property  max heap and min heap 
#include<iostream>
using namespace std;

class Heap{
public:
    int arr[1000];
    int size=0;
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){

            int parent=index/2 ;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);

            }
            else return ;

        }

    }

    void print (){
         for(int i=1;i<=size;i++){
            cout << arr[i] << " "; 
         }
    }

    void deletefromheap(){
         
    }
};

int main () {
    
    
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    return 0;
    
}