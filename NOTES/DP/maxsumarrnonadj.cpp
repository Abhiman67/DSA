// #include <bits/stdc++.h> 

// recursion+memoiz
// int solve(int idx,vector<int>&nums,vector<int>&dp){

//     if(dp[idx]!=-1) return dp[idx];
//     if(idx==0) return nums[idx];
//     if(idx<0)  return 0;

//     int pick= nums[idx] + solve(idx-2,nums,dp);
//     int notp =  solve(idx-1,nums,dp);


//     return dp[idx]= max(pick,notp);
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     // Write your code here.
//     int n=nums.size();
//     vector<int>dp(n+1,-1);
//     return solve(n-1,nums,dp);


//  tabulation
