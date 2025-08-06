#include <iostream>
using namespace std;

// Binary to Decimal
int binToDec(int bin) {
    int dec = 0, base = 1;
    while (bin > 0) {
        int d = bin % 10;
        dec += d * base;
        base *= 2;
        bin /= 10;
    }
    return dec;
}

// Decimal to Binary
int decToBin(int dec) {
    int bin = 0, place = 1;
    while (dec > 0) {
        int r = dec % 2;
        bin += r * place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

int main() {
    int b, d;
    cout << "Enter binary: ";
    cin >> b;
    cout << "Decimal = " << binToDec(b) << endl;

    cout << "Enter decimal: ";
    cin >> d;
    cout << "Binary = " << decToBin(d) << endl;

    return 0;
}
