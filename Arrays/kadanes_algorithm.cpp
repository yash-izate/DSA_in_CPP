// your code here

#include <iostream>
using namespace std;

int kadanes_algo(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }

    return maxSum;

}


int main() {
    
 int arr[] = {2, -3, 6, -5, 4, 2};
 int size = sizeof(arr) / sizeof(arr[0]);

 int result = kadanes_algo(arr, size);
 cout << "Maximum Sub: " << result; 

    return 0;
}