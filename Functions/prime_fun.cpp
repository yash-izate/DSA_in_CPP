// your code here

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string result = (prime(23)) ? "Prime" : "Not Prime";
    cout << result << endl;
    return 0;
}