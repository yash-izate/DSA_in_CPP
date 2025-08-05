// your code here

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; // Stop checking further
            }
        }
    }

    string result = (isPrime) ? "Prime" : "Not Prime";
    cout << result;
    return 0;
}