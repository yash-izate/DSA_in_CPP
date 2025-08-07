// your code here

#include <iostream>
using namespace std;

int changeA(int *ptr)
{

    *ptr = 5;
    // cout << "A = " << *ptr << endl;
    return *ptr;
}

int changeB(int b)
{
    b = 40;
    // cout << "B = " << b << endl;
    return b;
}

int main()
{

    int a = 10;
    int b = 20;

    cout << changeA(&a) <<endl;
    cout << changeB(b) << endl;

    cout << a << endl;
    cout << b << endl;

    return 0;
}