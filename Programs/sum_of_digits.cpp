// your code here

#include <iostream>
using namespace std;

int main()
{

    int n;
    int sum = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n > 0)
    {
        int dig = n % 10;
        sum += dig;
        n /= 10;
    }

    cout << "Sum of digits: " << sum;
    return 0;
}