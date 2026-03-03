#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >>n ;

        int a[n];
        for(int i=0;i<n;i++){

            cin >> a[i];
        }

        vector<int>odd,even;
        int sum=0;



        for(int i=0;i<n;i++){

            
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else {
                odd.push_back(a[i]);
            }
        }


       if(odd.size()%2==0){
        cout << "YES " << endl;
       }
       else {
        cout << "NO" << endl;

       }
    }

    return 0;
    
}