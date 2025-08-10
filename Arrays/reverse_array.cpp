#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int copyArr[size];

    // Copy in reverse order
    for (int i = 0; i < size; i++) {
        copyArr[i] = arr[size - 1 - i];
    }

    // Copy back to original array
    for (int i = 0; i < size; i++) {
        arr[i] = copyArr[i];
    }

    // Print
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
