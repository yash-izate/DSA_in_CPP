#include <iostream>
using namespace std;

void sortedArray(int *arr, int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1) cout << ", ";  // no extra comma
    }
    cout << endl;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);
    sortedArray(arr, size);

    return 0;
}
