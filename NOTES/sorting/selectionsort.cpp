#include<iostream>
using namespace std ;

    // SELECTION SORT 

void selectsort(int*arr,int l){



    for(int i=0;i<l-1;i++){

        int minnu=i;

        for(int j=i;j<l;j++){


            if(arr[j]<arr[minnu]){

              
                minnu=j;
            }
            
        }
          swap(arr[i],arr[minnu]);
        
    }
   
for (int i=0;i<l;i++){
    cout << arr[i] << " " ;
}
}



 
int main (){
 

    int arr[5]={5,4,1,3,2};
    int l = sizeof(arr)/sizeof(int);
    selectsort(arr,l);
    return 0;

}