#include<iostream>
using namespace std;

int main(){

 // iterative binary search function 

 int binarysearch(int low,int high,vector<int>arr,int target){

     int mid= (low+high)/2;

     if(arr[mid]==target){
          return arr[mid];
     }
     if(arr[mid]<target){
        low=mid+1;

     }
     else if(arr[mid]>target){
        high=mid-1;
     }
 }
}


