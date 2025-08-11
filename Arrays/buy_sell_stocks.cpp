#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

void maxProfit(int *prices, int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT_MAX; // Before day 0, no price is available

    // Fill bestBuy[] with the minimum price so far before each day
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        // cout << bestBuy[i] << ", ";
    }
    cout << endl;

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << "Max Profit = " << maxProfit << endl;
}

int main()
{
    // int prices[] = {7, 1, 5, 3, 6, 4};
    int prices[] = {7, 6, 5, 3, 2, 1};
    int n = sizeof(prices) / sizeof(prices[0]);

    maxProfit(prices, n);

    return 0;
}
