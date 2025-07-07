#include <iostream>
using namespace std;

void selectionSortDesc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }
        swap(arr[i], arr[max_idx]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSortDesc(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // Output: 64 25 22 12 11
    return 0;
}
