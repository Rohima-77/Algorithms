#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; // if the get value then return the index
        else if (arr[mid] < key)
            low = mid + 1; // Find the right side
        else
            high = mid - 1; // Find the left side
    }

    return -1; // if don't gate value then return -1
}

// main function
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the value to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
