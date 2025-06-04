#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Every sided big element go to the end 
        for (int j = 0; j < n - i - 1; j++) {
            // if present element is bigger than after element then element is swap
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// print Array function
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array using Bubble Sort:\n";
    printArray(arr, n);

    return 0;
}
