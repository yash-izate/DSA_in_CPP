#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num %2 != 0) {
        cout << "Odd Number";
    } else {
        cout << "Even Number";

    }
}