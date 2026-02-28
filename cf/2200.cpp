#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){

        long long  n;
        cin >> n;

        int a[n];
        int maxi=INT_MIN;

        for(int i=0;i<n;i++){

            cin >> a[i];
            maxi=max(maxi,a[i]);

        }

        int cnt=0;

        for(int i=0;i<n;i++){

            if(maxi==a[i]){

              cnt++;
            }

        }

        cout << cnt << endl;



    }

    return 0;

}