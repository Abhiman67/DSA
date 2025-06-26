class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        if (totalsum % 2 != 0) return false;
        int target = totalsum / 2;

        int n=nums.size();



        
        vector<vector<bool>>dp(n,vector<bool>(target+1,false));
    

        for(int i=0;i<n;i++){

            dp[i][0]=true;
        }

        if (nums[0] <= target)
            dp[0][nums[0]] = true;





        for(int idx=1;idx<n;idx++){

            for(int t=1;t<=target;t++){

                bool notpick= dp[idx-1][t];

                bool pick=false;
                if(nums[idx]<=t) pick=dp[idx-1][t-nums[idx]];


                dp[idx][t] = pick || notpick;
      

            }

            
        }
          return dp[n-1][target];
    }
}; 