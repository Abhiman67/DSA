int mini = INT_MAX ;
int idx=0;

while(low<=high){

    int mid= low + high /2 ;

    if(arr[low]<= arr[high]){

        if(arr[low]<mini){

            idx=low;
            mini=arr[low];
        }
        break;
    }


    if(arr[low] <=arr[mid]){

       if(arr[low]<mini){

        idx=low;
        mini=arr[low];
       }

    }

    if(arr[mid]<arr[high]){

      if(arr[mid]<mini){

        idx=mid;
        mini=arr[mid];
        high=mid-1;
      }
        
    }

    return idx;
    
}