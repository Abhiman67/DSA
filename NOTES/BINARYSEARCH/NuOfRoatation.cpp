int findKRotation(vector<int> &arr){
    // Write your code here.    
    int n=arr.size();

    int low=0;
    int high =n-1;
    int idx=0;

   while(low<=high){

       int mid=low+(high-low)/2;

       if(arr[low]<=arr[high]){


         if(arr[low]<=arr[idx])  idx=low;
           break;

       }
         //left half sorted
       if(arr[low]<=arr[mid]){

           if(arr[low]<arr[idx]) idx =low;
           low=mid+1;
    
       }

       //right half sorted

       else{

           if(arr[mid]<arr[idx]) idx=mid;
           high=mid-1;
       }

   }

        return idx;
}