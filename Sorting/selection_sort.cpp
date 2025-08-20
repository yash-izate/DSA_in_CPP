// Selection Sort is a simple sorting algorithm that repeatedly finds the minimum element from the unsorted part of the array and places it at the beginning.

// Time Complexity:

// Best / Worst / Average: O(n²)

// Space Complexity: O(1) (in-place sorting)

#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << i;

        if (i < n - 1)
            cout << ", "; // no extra comma
    }
    cout << endl;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    print(arr, n);
}

int main()
{

    int arr[] = {4, 0, 3, 5, 1, 2, 7, 3};

    int size = sizeof(arr) / sizeof(int);

    selectionSort(arr, size);

    return 0;
}