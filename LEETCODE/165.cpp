#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> Tokend(string version) {
        vector<string> tokens;
        stringstream ss(version);
        string token;

        while (getline(ss, token, '.')) {
            tokens.push_back(token);
        }
        return tokens;
    }

    int compareVersion(string version1, string version2) {
        vector<string> a = Tokend(version1);
        vector<string> b = Tokend(version2);

        int n = max(a.size(), b.size());

        for (int i = 0; i < n; i++) {
            int val1 = (i < a.size()) ? stoi(a[i]) : 0;
            int val2 = (i < b.size()) ? stoi(b[i]) : 0;

            if (val1 > val2) return 1;
            if (val1 < val2) return -1;
        }
        return 0;
    }
};
