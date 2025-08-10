#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key) {
    int start = 0, end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid; // key found
        }
        else if (arr[mid] > key) {
            end = mid - 1; // search left
        }
        else {
            start = mid + 1; // search right
        }
    }
    return -1; // key not found
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 8}; // must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter key: ";
    cin >> key;

    int idx = binarySearch(arr, size, key);

    if (idx != -1)
        cout << "Key found at index: " << idx << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}
