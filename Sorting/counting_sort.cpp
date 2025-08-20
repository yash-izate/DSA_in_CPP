// Counting Sort is a non-comparison based sorting algorithm that counts the frequency of each element and uses this count to place elements directly into their correct position.

// Complexity
// Best Case: O(n + k)
// Average Case: O(n + k)
// Worst Case: O(n + k)
// (where n = number of elements, k = range of input values)

// 💾 Space Complexity
// O(n + k) (extra space for count and output arrays)


#include <iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    // Step 1: Find the maximum value
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Step 2: Create count array and initialize with 0
    int count[maxVal + 1] = {0};

    // Step 3: Count each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 4: Put numbers back into arr (sorted)
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
