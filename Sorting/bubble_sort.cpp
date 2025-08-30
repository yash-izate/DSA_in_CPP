// Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements in an array and swaps them if they are in the wrong order

// Time Complexity:

// Worst / Average: O(n²)
// Best (already sorted): O(n)

#include <iostream>
using namespace std;

void sortedArray(int *arr, int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << ", "; // no extra comma
    }
    cout << endl;
}

void bubbleSort(int *arr, int n)
{
    bool isSwap = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            cout << "Array is already sorted." << endl;
            return;
        }
    }
}

int main()
{
    // int arr[] = {5, 9, 0, 4, 1, 3, 2};

    int arr[] = { 0, 1, 2, 3, 4, 5, 9};

    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);
    sortedArray(arr, size);

    return 0;
}
