#include<bits/stdc++.h>
using namespace std;

int main(){


      long long n;
      cin >> n;

      long long a[n];
      long long minops=INT_MAX;


        for(int i=0;i<n;i++){

            cin >> a[i];
              minops=min(minops,abs(a[i]));
        }
        
      cout << minops <<endl;

        return 0;
    }

  

