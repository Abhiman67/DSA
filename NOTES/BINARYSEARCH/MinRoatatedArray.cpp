INT MIN = INT_MAX ;

while(low<=high){

    int mid= low + high /2 ;

    if(arr[low]<= arr[high]){

        mini=min(mini,arr[low]);

    }


    if(arr[low] <=arr[mid]){

        mini=min(mini,arr[low]);
        low=mid+1;

    }

    if(arr[mid]<arr[high]){

        mini=min(mini,arr[mid])
        high = mid-1;
        
    }
}

