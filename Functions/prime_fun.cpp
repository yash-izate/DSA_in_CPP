// your code here

#include <iostream>
#include <cmath>

using namespace std;

int prime(int n) {

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) {

            isPrime = false;

        }
    }

    return isPrime;
    
}

int main() {
    
    string result = (prime(23)) ?   "Prime" : "Not Prime";

    cout << result << endl;

    
 
    return 0;
}