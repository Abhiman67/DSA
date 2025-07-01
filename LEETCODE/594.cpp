class Solution {
public:
    int findLHS(vector<int>& nums) {
    int n=nums.size();
     unordered_map<int, int>mp;

     for(int i=0;i<n;i++){

        mp[nums[i]]++;
     }

     int res=0;

     for(auto& [key,val]: mp){

        if(mp.find(key+1)!=mp.end()){

            res = max(res, val + mp[key + 1]);
        }

     }

       return res;

    }
};