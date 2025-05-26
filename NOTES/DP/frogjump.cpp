// #include <bits/stdc++.h>
// using namespace std;
 
// int solve(int n, vector<int> &heights, vector<int> &dp) {
//     if (n == 0) return 0;

//     if (dp[n] != -1) return dp[n];

//     int one = solve(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);

//     int two = INT_MAX;
//     if (n > 1)
//         two = solve(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);

//     return dp[n] = min(one, two);
// }

// int frogJump(int n, vector<int> &heights) {
//     vector<int> dp(n, -1);
//     return solve(n - 1, heights, dp);
// }

// TABULATION

