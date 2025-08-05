// your code here

#include <iostream>
using namespace std;

int main()
{

    int orgNum = 2156;
    int revNum = 0;

    while (orgNum > 0)
    {
        int digit = orgNum % 10;
        revNum = revNum * 10 + digit;
        orgNum /=10;
    }

    cout << "Reverse Number: " << revNum;
    return 0;
}