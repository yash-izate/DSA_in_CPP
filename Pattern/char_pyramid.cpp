// your code here

#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    char temp = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << temp << " ";
            temp++;
        }

        cout << endl;
    }

    return 0;
}