#include<iostream>
#include<vector>
using namespace std;

// Merge two sorted subarrays into one sorted array
void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp; // Temporary array to store merged elements
    int i = si;       // Starting index for the left subarray
    int j = mid + 1;  // Starting index for the right subarray

    // Merge the two subarrays
    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Copy any remaining elements from the left subarray
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Copy any remaining elements from the right subarray
    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy the merged elements back into the original array
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

// Recursive function to divide and sort the array
void mergeSort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;  // Base case: If there's only one element, it's already sorted
    }
    int mid = si + (ei - si) / 2;

    // Recursively sort the left and right halves
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    // Merge the sorted halves
    merge(arr, si, mid, ei);
}

// Helper function to print the array
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    // Perform merge sort on the array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    printArr(arr, n);

    return 0;
}
