// your code here

#include <iostream>
using namespace std;

void SubArrays(int *arr, int size)
{

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {

            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ", ";
        }

        cout << endl;
    }
}
int main()
{

    int arr[] = {3, 5, 7, 9, 0};

    SubArrays(arr, size(arr));

    return 0;
}