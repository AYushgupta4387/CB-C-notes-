// Maximum sum of sub array
// A subarray consists of continuous numbers.
// Kadane's Algorithm for maximum subarray sum
// Time complexity is of the order n

#include<iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;

    int a[1000] = {0};

    int maxSum = 0;
    int currentSum = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];

        // Kadane's Algorithm for maximum subarray sum
        currentSum = currentSum + a[i];
        if(currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }

    cout << maxSum;

    return 0;
}