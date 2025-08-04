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
        cout << "Tax = " << tax;
    }
    else if (income >= 5 && income < 10)
    {
        tax = (income - 5) * 0.2;
        cout << "Tax = " << tax;
    }
    else if (income >= 10 && income < 20)
    {
        tax = ((income - 5) * 0.2 + (income - 10) * 0.25);
        cout << "Tax = " << tax;
    }
    else
    {
        tax = ((income - 5) * 0.2 + (income - 10) * 0.25 + (income - 20) * 0.3);
        cout << "Tax = " << tax;
    }

    return 0;
}