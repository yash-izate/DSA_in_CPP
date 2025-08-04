#include <iostream>
using namespace std;

int main()
{
    int math, phy, chem;

    cout << "Welcome to Average Calculator!" << endl;

    cout << "Enter marks in Math: ";
    cin >> math;
    cout << "Enter marks in Physics: ";
    cin >> phy;
    cout << "Enter marks in Chemistry: ";
    cin >> chem;

    int avg = (math + phy + chem) / 3;

    cout << "\nAverage Marks: " << avg;

    return 0;
}