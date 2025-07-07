#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void selectionSortStruct(Student arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j].marks < arr[min_idx].marks)
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    Student arr[] = {{"Alice", 85}, {"Bob", 72}, {"Charlie", 90}};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSortStruct(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i].name << " (" << arr[i].marks << ") "; 
    // Output: Bob (72) Alice (85) Charlie (90)
    return 0;
}
