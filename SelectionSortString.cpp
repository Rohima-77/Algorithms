#include <iostream>
#include <string>
using namespace std;

void selectionSortString(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    string arr[] = {"banana", "apple", "orange", "grape"};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSortString(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // Output: apple banana grape orange
    return 0;
}
