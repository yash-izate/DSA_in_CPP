// your code here

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 6, 9, 4, 5, 3, 5, 8, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {

            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    cout << "Sorted Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}