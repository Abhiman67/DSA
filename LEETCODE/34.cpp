class Solution {
public:
int first(vector<int>& nums, int target){
    
    int n=nums.size();
    int low=0;
    int high=n-1;
    int f=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            f=mid;
            low=mid+1;

        }
        else if(target<nums[mid])  { high=mid-1; }

        else  low=mid+1;

    }

    return f;
    
}
int second(vector<int>& nums, int target){
    
    int n=nums.size();
    int low=0;
    int high=n-1;
    int s=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(nums[mid]==target){
            s=mid;
            high=mid-1;
        }
        else if(nums[mid]<target) {low=mid+1;}

        else high=mid-1;


       

    }

    return s;
}
    vector<int> searchRange(vector<int>& nums, int target) {

          vector<int>ans;
                    ans.push_back(second(nums,target));

          ans.push_back(first(nums,target));

          return ans;   
    }
};