// #include<iostream>
// using namespace std;

// //// USING ARRAYS

// void merge(int *arr,int s,int e){
//     int mid=(s+e)/2;
//     int len1 = mid-s+1;
//     int len2 = e-mid;
    
//     int *first = new int[len1];
//     int *second = new int [len2];

//     //for copy values

//     int mainindex=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[mainindex];
//        // i++;
//         mainindex++;
//     }
     
//      mainindex=mid+1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i]=arr[mainindex];
//         mainindex++;

//     }

//     /// merge 2 arrays
//     int index1 = 0;
//     int index2= 0;
//     mainindex=s;

//     while (index1<len1 && index2<len2)
//     {
//         if(first[index1]<second[index2]){
//             arr[mainindex++]=first[index1++];

//         }
//         else             arr[mainindex++]=second[index2++];

//     }
//     while (index1<len1){
//          arr[mainindex++]=first[index1++];
//     }
    
//      while (index2<len2){
//          arr[mainindex++]=second[index2++];
//     }
    
// }

// void mergesort(int *arr,int s,int e){
//     int mid= (s+e)/2;
//     if(s>=e){
//         return ;
//     }

//     // left sort
//     mergesort(arr,s,mid);

//     // right sort
//     mergesort(arr,mid+1,e);

//     merge(arr,s,e);

// }
// int main(){
//     int arr[7]={7,5,6,4,2,3,1};
    
//     mergesort(arr,0,6);
//     for (int i = 0; i < 7; i++)
//     {
//     cout << arr[i] << endl;
//     }
    
//     return 0;
    
// }

//
void merge(int *arr,int low,int high,int mid){

    int left=low;
    int right=mid+1;
    vector<int>temp;

    while(left<=right && right <=high){
        if(arr[left]<=arr[right]){
          temp.push_back(arr[left]);
          left++;

        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
       

        }
         while(left<=mid){
          temp.push_back(arr[left]);
                    left++;

        }
        while(right<=high){
            temp.push_back(arr[right]);
                        right++;
    }
}

void mergesort(int *arr , int low,int high){
    if(low >=high) return ;

    int mid =low+high/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);



}

// /// USING STACK
        