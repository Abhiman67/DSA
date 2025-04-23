#include<iostream>
using namespace std;

// // bottom up app
// class Solution {
//     public:
//         int climbStairs(int n) {
//             if (n <= 2) return n;
    
//             vector<int> dp(n + 1, 0);
//             dp[1] = 1;
//             dp[2] = 2;
    
//             for (int i = 3; i <= n; i++) {
//                 dp[i] = dp[i - 1] + dp[i - 2];
//             }
    
//             return dp[n];
//         }
//     };

// memo top down 
class Solution {
    public:
    int dp[46];
      int solve (int n){
    
        if(n<0) return 0;
    
        if(dp[n]!=-1) return dp[n];
    
        if(n==0 ) return 1;
    
        int one=solve(n-1);
        int two=solve(n-2);
    
        return dp[n]=one+two; 
      }
        int climbStairs(int n) {
           
           memset(dp,-1,sizeof(dp));
    
           return solve(n);
        }
    };