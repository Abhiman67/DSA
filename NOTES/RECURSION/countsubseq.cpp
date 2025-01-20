#include <iostream>
#include <vector>
using namespace std;

void PrintS(int idx, vector<int>& ds, int s, int sum, int arr[], int n) {
    // Base case: if index reaches the end of the array
    if (idx == n) {
        if (s == sum) {
        
            return 1;
        }

        else return 0;

        
    }

    // Include the current element
    ds.push_back(arr[idx]);
    s += arr[idx];
   int l= PrintS(idx + 1, ds, s, sum, arr, n); // Recurse for the next element

    // Backtrack: exclude the current element


    ds.pop_back();
    s -= arr[idx];
    int r= PrintS(idx + 1, ds, s, sum, arr, n); // Recurse for the next element

    return l+r;

}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> ds;
    PrintS(0, ds, 0, sum, arr, n); 

    return 0;
}
