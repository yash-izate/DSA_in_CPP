// your code here

#include <iostream>
using namespace std;

int main() {
    int n = 15;

    long long fact = 1;

    while (n > 0)
    {
        fact *= n;

        n--;
    }
    
    cout << "Factorial : " << fact << endl;
 
    return 0;
}