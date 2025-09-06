#include <iostream>
using namespace std;

int main()
{

    int m, n;

    cout << "Enter array row size: ";
    cin >> m;
    cout << "Enter array column size: ";
    cin >> n;

    int arr[m][n]; // works in GCC/Clang, not standard C++

    // input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }

    // output
    cout << "\nArray elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
