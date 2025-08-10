// Brute Force Approach - Time Complexity O(n^3)

#include <iostream>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;

            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }

            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }

        cout << endl;
    }

    return maxSum;
}

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = size(arr);

    int result = maxSubarraySum(arr, n);
    cout << "Max Subarray Sum: " << result << endl;

    return 0;
}