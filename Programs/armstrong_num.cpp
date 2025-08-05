// Armstrong number = sum of nth power of digits (where n = number of digits)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int num = n;
    int digits = 0;
    int temp = n;

    // Count number of digits
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits); // Use nth power
        temp /= 10;
    }

    string result = (num == sum) ? "Armstrong Number" : "Not Armstrong Number";
    cout << result;

    return 0;
}