// Insertion Sort is a simple algorithm that builds the sorted array one element at a time by picking each element and inserting it into its correct position in the already sorted part.

// Best Case (sorted array): O(n)

// Average Case: O(n²)

// Worst Case (reverse sorted): O(n²)

// Space Complexity: O(1)


#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];   // element to be inserted
        int prev = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
         prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(int);

    insertionSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}
