// your code here

#include <iostream>
using namespace std;

int main() {
    int n = 1000;

    for (int i = 0; i < n; i++)
    {
        if (i % 10 == 0) // Check if i is a multiple of 10
        {
            continue;
        }

        cout << i << " , ";
    }

    return 0;
}