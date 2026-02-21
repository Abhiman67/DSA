#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int a[n-1];

        

        for(int i=0;i<n-1;i++){

            cin>> a[i];
        }


        long long sum=0;

        for(int i=0;i<n-1;i++){

            sum+= a[i];
        }

        cout << (sum) * -1<< endl;
    }

    return 0;
}