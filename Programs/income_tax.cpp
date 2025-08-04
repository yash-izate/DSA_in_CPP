#include <iostream>
using namespace std;

int main()
{
    float income;
    float tax;

    cout << "Enter income in lakhs: ";
    cin >> income;

    if (income < 5)
    {
        tax = 0;
    }
    else if (income < 10)
    {
        tax = (income - 5) * 0.2;
    }
    else if (income < 20)
    {
        tax = (5 * 0.2) + (income - 10) * 0.25;
    }
    else
    {
        tax = (5 * 0.2) + (10 * 0.25) + (income - 20) * 0.3;
    }
    cout << "Tax = " << tax * 100000;

    return 0;
}