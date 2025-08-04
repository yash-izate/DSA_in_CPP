#include <iostream>
using namespace std;

int main () {
    int age;

    cout << "Enter age: ";
    cin >> age;

    string isAdult = (age >= 18) ? "Yes" : "No";
    cout << "Is adult? " << isAdult << endl;

    bool isEven = (age % 2 == 0) ? true : false;
    string temp = (isEven)? "Even" : "Odd";
    cout << "Age is: " << temp << endl;

    return 0;
}