// // recursion 
// bool f(int idx, int target, vector<int>& arr) {
//     if (target == 0) return true;
//     if (idx == 0) return arr[0] == target;

//     bool nope = f(idx - 1, target, arr);
//     bool pick = false;
//     if (arr[idx] <= target)
//         pick = f(idx - 1, target - arr[idx], arr);

//     return nope || pick;
// }

// int minSubsetSumDifference(vector<int>& arr, int n) {
//     int totsum = 0;
//     for (int i = 0; i < n; i++) {
//         totsum += arr[i];
//     }

//     int mini = INT_MAX;
//     int target = totsum / 2;

//     // Check all subset sums from 0 to target
//     for (int j = 0; j <= target; j++) {
//         if (f(n - 1, j, arr)) {
//             int s1 = j;
//             int s2 = totsum - j;
//             mini = min(mini, abs(s1 - s2));
//         }
//     }

//     return mini;
// }


/// TABULATIOn


int minSubsetSumDifference(vector<int>& arr, int n) {
    int totsum = 0;
    for (int i = 0; i < n; i++) {
        totsum += arr[i];
    }

    int target = totsum;
    vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

    // Initialize
    for (int i = 0; i < n; i++)
        dp[i][0] = true;

    if (arr[0] <= target)
        dp[0][arr[0]] = true;

    // Fill the table
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= target; j++) {
            bool notPick = dp[i - 1][j];
            bool pick = false;
            if (arr[i] <= j)
                pick = dp[i - 1][j - arr[i]];

            dp[i][j] = pick || notPick;
        }
    }

    int mini = INT_MAX;
    // Try all subset sums up to totsum/2
    for (int s1 = 0; s1 <= totsum / 2; s1++) {
        if (dp[n - 1][s1]) {
            int s2 = totsum - s1;
            mini = min(mini, abs(s2 - s1));
        }
    }

    return mini;
}

