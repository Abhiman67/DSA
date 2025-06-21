/// m1 memoisation
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Memoization
int solve(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp, int n, int m) {
    if (j < 0 || j >= m) {
        return -1e9;
    }

    if (i == 0) {
        return matrix[i][j];
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int up = matrix[i][j] + solve(i - 1, j, matrix, dp, n, m);
    int rightdia = matrix[i][j] + solve(i - 1, j + 1, matrix, dp, n, m);
    int leftDia = matrix[i][j] + solve(i - 1, j - 1, matrix, dp, n, m);

    return dp[i][j] = max({up, rightdia, leftDia});
}

int getMaxPathSum(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int ans = INT_MIN;

    vector<vector<int>> dp(n, vector<int>(m, -1));

    // FIX: loop on columns in last row
    for (int j = m - 1; j >= 0; j--) {
        ans = max(ans, solve(n - 1, j, matrix, dp, n, m));
    }

    return ans;
}


/// m2 tabulation
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        for (int j = 0; j < m; j++) {
            dp[0][j] = matrix[0][j];
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int up = matrix[i][j] + dp[i-1][j];

                int ul = 1e9; 
                if (j-1 >= 0) {
                    ul = matrix[i][j] + dp[i-1][j-1];
                }

                int ur = 1e9;
                if (j+1 < m) {
                    ur = matrix[i][j] + dp[i-1][j+1];
                }

                dp[i][j] = min(up, min(ul, ur));
            }
        }

        int mini = 1e9;
        for (int j = 0; j < m; j++) {
            mini = min(mini, dp[n-1][j]);
        }

        return mini;
    }
};
