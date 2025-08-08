// your code here

#include <iostream>
using namespace std;

int main()
{

    int n;
    int arr[n];

    cout << "Enter size of array: ";
    cin >> n;

    int i = 0;

    do
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
        i++;
    } while (i < n);

    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Smallest in array: " << min << endl;

    return 0;
}