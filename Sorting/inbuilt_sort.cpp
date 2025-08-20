#include <iostream>
#include <algorithm> // for sort()
using namespace std;

// Function to sort in Ascending order
void sortAscending(int arr[], int n)
{
    sort(arr, arr + n); // default = ascending
    cout << "Ascending Order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Function to sort in Descending order
void sortDescending(int arr[], int n)
{
    sort(arr, arr + n, greater<int>()); // use greater<int>()
    cout << "Descending Order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortAscending(arr, n);
    sortDescending(arr, n);

    return 0;
}
