#include<iostream>
using namespace std;


void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i];
 
    }
}
void BubbleSort(int*arr,int n){
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
     }
}

int main (){
    int arr[]={1,4,5,7,3,2,6};
    int n= sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    print(arr,n);

}