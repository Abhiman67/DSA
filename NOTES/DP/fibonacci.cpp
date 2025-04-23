/// fibonacci 

#include<iostream>

// m1 using top down -> memoization+rec
// using namespace std;
// int fibo(int n,vector<int>&dp){
//     if(n<=1) return 1;
//     if(dp[n]!=-1) return dp[n];

//      return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);

// }
// int main (){

//     int n;
//    cin >> n;
//    vector<int>dp(n+1,-1);
 
//    cout << fibo(n,dp);
//    cout << "hello world";
// }

// m2 using bottom up -> tabulation

// using namespace std ;

// void fib(int n,vector<int>&dp){

//     dp[0]=0;
//     dp[1]=1;

//     for(int i=2;i<n;i++){

//         dp[i]=dp[i-1]+dp[i-2];

//     }

//     cout << dp[n];
// }


// int main(){

//     int n;
//     cin>> n;

//     vector<int>dp(n+1,-1);
//     fib(n,dp);
// }

// m3 space optimization
