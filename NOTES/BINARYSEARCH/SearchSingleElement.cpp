// for finding single element we have to go by logic that even odd ,even odd we have to find place where this logic is brokne


if(n==1) return nums[0];

if(nums[0]!=nums[1]) return nums[0];

if(nums[n-1]!=nums[n-2]) return nums[n-1];

int low=1,high= n-2 ;

while(low<=high){

    int mid=low+high /2;

    if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1] ){
        return nums[mid];
    }

    if(mid%2==1 && nums[mid]==nums[mid-1] || mid%2==0 && nums[mid]==nums[mid+1]){

        low=mid+1;
    }

    else high=mid-1;
}


return -1;