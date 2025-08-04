#include <iostream>
using namespace std;

int main () {
    int age;

    cout << "Enter age: ";
    cin >> age;

    string isAdult = (age >= 18) ? "Yes" : "No";

    cout << isAdult;

    return 0;
}