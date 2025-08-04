#include <iostream>
using namespace std;

int main () {
    int a = 5;
    int b = 10;

    if (a == b)
    {
        cout << "A equals B";
    } else if ( a > b) {
        cout << "A is greater than B";
    } else {
        cout << "B is greater than A";
    }
    
    return 0;
}