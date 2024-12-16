#include<iostream>
using namespace std;


    void CountSort(int*arr,int l){
        int freq[1000];
        int maxnum= INT16_MIN;
        int minnum= INT16_MAX;

        for(int i =0;i<l;i++){

            maxnum=max(maxnum,arr[i]);
            minnum=min(maxnum,arr[i]);
        
        }


        /// first step

        for(int i=0;i<l;i++){
            
            freq[arr[i]]++;

        }

        for(int i=minnum, j=0;i<=maxnum;i++){
            while(freq[i]>0){
                arr[j++]=i;
                freq[i]--;


            }
        }

           


    }

  int main (){
    int arr[8]={1,4,1,3,2,4,3,7};
    CountSort(arr,8);
     for(int i=0;i<8;i++){
            
            cout << arr[i] << " ";
        
            }
    return 0;
    }  