#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n , x  ;  // n is integer and x is distance 

        cin >> n >> x;

        vector<int>nums(n);
        for(int i=0;i<n;i++){

            cin >> nums[i];

        }

        nums.push_back(0);
        nums.push_back(x);

        sort(nums.begin(),nums.end());

        int mincap=0;


        for(int i=1 ;i<nums.size();i++){

          mincap=max(mincap,nums[i]-nums[i-1]);
          

        }

        int tail = 2 * (x- nums[nums.size()-2]);
        
        mincap = max(mincap,tail);

        return mincap;

    }
        


}