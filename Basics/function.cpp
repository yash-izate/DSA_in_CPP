// your code here

#include <iostream>
using namespace std;

int sum(int x, int y);         //function declaration

int main() {

    int result = sum(7,3);     //function calling

    cout << "Sum: " << result << endl;
    
 
    return 0;
}

int sum(int a, int b) {        //function defination
    int sum = a + b;
    return sum;

}