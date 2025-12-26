#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> gas(n);
        for (int i = 0; i < n; i++) cin >> gas[i];


        gas.push_back(0);   // start
        gas.push_back(x);   // end
        
        sort(gas.begin(), gas.end());

        int ans = 0;

        // normal gaps
        for (int i = 1; i < gas.size(); i++) {
            ans = max(ans, gas[i] - gas[i-1]);
        }

        // tail gap doubled
        int tail = 2 * (x - gas[gas.size()-2]);
        ans = max(ans, tail);

        cout << ans << "\n";
    }


    return 0;
    
}
 