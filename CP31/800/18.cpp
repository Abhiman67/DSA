#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int x,k;

        cin >> x >> k;

        if(x%k==0){

        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long x, k;
        cin >> x >> k; 
        
        if (x % k == 0) 
        {
            cout << 2 << endl; 
            cout << 1 << " " << x - 1 << endl;
        }
        else 
        {
            cout << 1 << endl; 
            cout << x << endl; 
        }
    }
    return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)