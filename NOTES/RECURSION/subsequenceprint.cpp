#include<iostream>
using namespace std;

void PrintS(int idx,int arr[],vector<int>&ds,int n){

    if(idx==n){

        for(auto it :ds ){
            cout << it << " ";
         } 

         cout << endl ;
         return ;

        }

        ds.push_back(arr[idx]);
        PrintS(idx+1,arr,ds,n);
        ds.pop_back(arr[idx]);
        PrintS(idx+1,arr,ds,n);

}
int main(){

    int arr[]={3,2,1};
    int n=3;
    vector<int>ds;


    PrintS(0,arr,ds,n);
    
    return 0;

}