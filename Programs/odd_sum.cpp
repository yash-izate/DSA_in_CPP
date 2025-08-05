// your code here

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    int oddSum = 0;
    int evenSum = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit % 2 != 0)
        {
            oddSum += digit;
        }
        else
        {
            evenSum += digit;
        }

        n /= 10;
    }

    cout << "Sum of odd digits: " << oddSum << endl;
    cout << "Sum of even digits: " << evenSum;

    return 0;
}