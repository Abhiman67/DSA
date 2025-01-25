#include <iostream>
#include <vector>
using namespace std;

// Partition Function: Places the pivot in its correct position
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low;
    int j = high;

    // Rearrange elements around the pivot
    while (i < j) {
        // Find an element greater than the pivot from the left
        while (arr[i] <= pivot && i < high) {
            i++;
        }
        // Find an element smaller than or equal to the pivot from the right
        while (arr[j] > pivot && j > low) {
            j--;
        }
        // Swap elements if i < j
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Place the pivot in its correct position
    swap(arr[low], arr[j]);

    return j; // Return the pivot's new index
}

// Quick Sort Helper Function: Recursively sorts the array
void qs(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pidx = partition(arr, low, high);

        // Recursively sort the subarrays
        qs(arr, low, pidx - 1);
        qs(arr, pidx + 1, high);
    }
}

// Quick Sort Function: Wrapper for the recursive function
void quicksort(vector<int>& arr) {
    qs(arr, 0, arr.size() - 1);
}

// Driver Code
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    quicksort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
