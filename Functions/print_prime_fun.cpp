// your code here

#include <iostream>
#include <cmath>
using namespace std;

int input()
{

    int a;

    cout << "Enter number: ";
    cin >> a;

    return a;
}

void prime(int n)
{
    bool isPrime;

    for (int i = 2; i <= n; i++)
    {

        isPrime = true;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << ", ";
        }
    }
}

int main()
{
    int n = input();

    prime(n);

    return 0;
}