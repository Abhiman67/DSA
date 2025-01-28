#include<iostream>
using namespace std;





void merge(int *arr,int low,int high,int mid){

    int left=low;
    int right=mid+1;
    vector<int>temp;

    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
          temp.push_back(arr[left]);
          left++;

        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
       

        }
         while(left<=mid){
          temp.push_back(arr[left]);
                    left++;

        }
        while(right<=high){
            temp.push_back(arr[right]);
                        right++;
    }
}

void mergesort(int *arr , int low,int high){
    if(low >=high) return ;

    int mid =low+high/2;
   
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);



}

// /// USING STACK
        