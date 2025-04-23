#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Size of array
        vector<int> a(n);
        int total_xor = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_xor ^= a[i];  // Compute total XOR
        }

        if (total_xor == 0) {
            cout << 0 << "\n";  // Already all zeros possible
            continue;
        }

        // Strategy: use (1, i+1) operations to align others with a[0]
        vector<pair<int, int>> ops;
        for (int i = 1; i < n; ++i) {
            ops.push_back({1, i + 1});
        }

        cout << ops.size() << "\n";
        for (auto& op : ops) {
            cout << op.first << " " << op.second << "\n";
        }
    }

    return 0;
}