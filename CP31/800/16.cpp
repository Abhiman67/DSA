#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        long long a[n];
        for(int i=0;i<n;i++){

            cin >> a[i];
        }


        long long mini=INT_MAX;
        bool issorted=true;



       for(int i=0;i<n-1;i++){

             
           if(a[i]>a[i+1]){

                issorted=false;
                break;
           }
             mini=min(mini,a[i+1]-a[i]);

       }

       if(!issorted){

        cout << "0" << endl;
       }
       else {
        cout << mini/2 +1 << endl;
       }


    }

         return 0;
}