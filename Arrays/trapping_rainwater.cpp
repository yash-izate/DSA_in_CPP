#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    vector<int> leftMax(n), rightMax(n);

    // Step 1: Fill leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Step 2: Fill rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Step 3: Calculate trapped water
    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        int waterHere = min(leftMax[i], rightMax[i]) - height[i];
        if (waterHere > 0) {
            totalWater += waterHere;
        }
    }

    cout << "Total trapped water: " << totalWater << endl;
    return 0;
}
