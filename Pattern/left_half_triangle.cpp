// your code here

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= 4; i++) 
    {
        for (int k = 1; k <= n - i; k++)
        {
            // for spaces
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
        
    }
    
 
    return 0;
}