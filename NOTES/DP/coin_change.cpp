class Solution {
public:

int f(int idx,vector<int>& coins, int amount,vector<vector<int>>&dp){
 if(amount<0) return 1e9;
      if(dp[idx][amount]!=-1) return dp[idx][amount];

      if(idx==0){
        if(amount % coins[idx]==0) return amount/coins[0];
       else  return 1e9; 
      }

      int nottake=f(idx-1,coins,amount,dp);

      int take=INT_MAX;
      if(coins[idx]<=amount) take= 1+ f(idx,coins,amount-coins[idx],dp);

  

    return dp[idx][amount]= min(nottake,take);
}
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();

        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
 
        int ans= f(n-1,coins,amount,dp);

        if(ans>=1e9) return -1;

        return ans;
    }
};