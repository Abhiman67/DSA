#include<bits/std++.h>
using namespace std;

int main(){

    int t;

    cin>> t;

    while(t--){

        long long n,k;

        cin >> n  >> k;

        vector<long long > a(n);

        for(int i=0;i<n;i++){

            cin >> a[i];
        }

        vector<long long > copy =a;

        if(copy == a || k >1) cout << "YES";
        else cout <<"NO";

    }

    return 0;

}