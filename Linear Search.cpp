#include <iostream>
using namespace std;

// Linear Search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // get the same then return this index
    }
    return -1; // if don't same then return the - 1
}

// main function
int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the value to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
