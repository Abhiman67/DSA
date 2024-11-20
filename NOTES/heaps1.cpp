#include <iostream>
#include<queue>
using namespace std;

class Heap {
public:
    int arr[1000];
    int size = 0;

    // Insert into the heap (max-heap property)
    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[index] > arr[parent]) {
                swap(arr[index], arr[parent]);
                index = parent;
            } else {
                return;
            }
        }
    }

    // Print the heap
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Delete the root of the heap
    void deleteheap() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[left] > arr[largest]) {
                largest = left;
            }
            if (right <= size && arr[right] > arr[largest]) {
                largest = right;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break;
            }
        }
    }
};

// Heapify function
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap sort function
void heapsort(int arr[], int n) {
    // Build the heap
    for (int i = n / 2; i > 0; i--) {
        heapify(arr, n, i);
    }
    // Extract elements from heap
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);
        heapify(arr, i - 1, 1);
    }
}

int main() {
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout << "Heap elements after insertion:\n";
    h.print();

    h.deleteheap();
    cout << "Heap elements after deletion of root:\n";
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50}; // -1 is a dummy value
    int n = 5;

    // Building the heap
    for (int i = n / 2; i > 0; i--) {
        heapify(arr, n, i);
    }

    // Heap sort
    heapsort(arr, n);

    cout << "Sorted array is:\n";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

  /// max heap 
  priority_queue<int> pq;
  pq.push(55);


  /// min heap
  priority_queue<int,vector<int>,greater<int>> minheap;
  
 
    return 0;
}
