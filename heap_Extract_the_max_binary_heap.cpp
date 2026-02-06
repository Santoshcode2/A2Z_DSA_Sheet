#include <iostream>
#include <algorithm>
using namespace std;

// Function to maintain the max-heap property
void heapify(int arr[], int n, int i) {
    int largest = i;                 // Initialize the largest as root
    int leftChild = 2 * i + 1;       // Left child index (0-based indexing)
    int rightChild = 2 * i + 2;      // Right child index (0-based indexing)

    // Compare with left child
    if (leftChild < n && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }

    // Compare with right child
    if (rightChild < n && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    // If the largest is not the root, swap and recursively heapify
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Build a max-heap from an unsorted array
void buildHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

class Solution {
  public:
    int arr[100]; // Heap array
    int size = 0; // Current size of the heap

    // Extract the maximum element from the heap
    int extractMax() {
        if (size <= 0) {
            cout << "Heap is empty!" << endl;
            return -1;
        }

        // Store the maximum element (root of the heap)
        int result = arr[0];

        // Replace root with the last element
        arr[0] = arr[size - 1];
        size--; // Reduce the size of the heap

        // Restore the heap property
        heapify(arr, size, 0);

        return result;
    }

    // Print the heap elements
    void printHeap() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution pq;

    // Input: {4, 2, 8, 16, 24, 2, 6, 5}
    int input[] = {4, 2, 8, 16, 24, 2, 6, 5};
    int n = 8;

    // Copy input to heap array
    for (int i = 0; i < n; i++) {
        pq.arr[i] = input[i];
    }
    pq.size = n;

    // Build the max heap
    buildHeap(pq.arr, pq.size);

    // Extract maximum element
    cout << "Node with maximum priority: " << pq.extractMax() << endl;

    // Print heap after extraction
    cout << "Priority queue after extracting maximum: ";
    pq.printHeap();

    return 0;
}
