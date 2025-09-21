#include <iostream>
using namespace std;

class Hero {
    // properties of class
    int health;
    char level;
};

int main() {
    // object of class
    Hero ramesh;
    cout << "size of ramesh: " << sizeof(ramesh) << endl;
    return 0;
}
