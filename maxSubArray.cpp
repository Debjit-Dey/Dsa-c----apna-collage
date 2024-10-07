#include <iostream>
#include <climits> // Include this for INT_MIN
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Variables to store current sum and maximum sum
    int currSum = 0;
    int maxSum = INT_MIN; // Initialize to the smallest possible integer

    // Loop through each subarray and calculate the maximum sum
    for (int i = 0; i < 9; i++) {
        currSum = 0; // Reset current sum for each starting point
        for (int j = i; j < 9; j++) {
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
