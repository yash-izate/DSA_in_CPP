// your code here

#include <iostream>
using namespace std;

//function declaration
int sum(int x, int y);         

int main() {

    //function calling
    int result = sum(7,3);        // here 7 and 3 are arugments

    cout << "Sum: " << result << endl;
    
 
    return 0;
}

//function defination
int sum(int a, int b) {          //a and b are parameter
    int sum = a + b;
    return sum;

}