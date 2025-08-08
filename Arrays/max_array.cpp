// your code here

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 5, 3, 7, 9, 5, 4};

    int n = size(arr);

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest in array: " << max << endl;

    return 0;
}