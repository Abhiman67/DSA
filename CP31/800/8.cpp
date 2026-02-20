#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        long long n ,k;

        cin >> n >> k;

        int a[n];

        for(int i=0;i<n;i++){

            cin >> a[i];
        }

        bool found=false;

        for(int i=0;i<n;i++){

            if(a[i]==k){

                cout << "YES " << endl;
                found=true;
                break;

            }


        }

        if(!found) {

            cout << "NO" << endl;
        }

    }

    return 0;
}