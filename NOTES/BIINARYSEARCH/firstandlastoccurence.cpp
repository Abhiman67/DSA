#include<iostream>
using namespace std; 

// lower bound 
int firstcurrence(int arr[],int n,int target  ){

    int low=0;
    int high =n-1;

    int first=-1;

    while(low<=high){

        int mid=low+high/2;

        if(arr[mid]==target){

            first=mid;
            high=mid-1;

        }

        else if(arr[mid]<target){
            
            low=mid+1;
        }

        else{
            high=mid-1;
        }

    }

    return first;
}

// upper bound 


int lastOcurrence(int arr[],int n,int target){

    int low=0,high=n-1;
    int last=-1;

    while(low<high){


    int mid=low+high /2;

    if(arr[mid]==target){

        last=mid;
        low=mid+1;
    }

    else if(arr[mid]<target){
        low=mid+1;
    }
    else high=mid-1;


    }
       return last;


}


// TC. :-> 2 X O(Log N)

// SC :-> O(1)

