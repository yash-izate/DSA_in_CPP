// sum of n numbers 

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum: " << sum;
    return 0;
}