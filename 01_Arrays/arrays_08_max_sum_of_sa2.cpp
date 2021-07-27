#include<iostream>
using namespace std; 

int main() {
    int n = 5;
    cin >> n;

    int currentSum = 0;
    int maxSum = 0;

    int left = 0;
    int right = 0;

    // We will create 2 different arrays, one of elements and the of their cum sum.
    int a[1000] = {0};
    int cumSum[1000] = {0}; 

    cin >> a[0];
    cumSum[0] = a[0];

    // We will input the cumulative sum array here only
    for(int i=1; i<n; i++) { // NOTE - i begins from 1
        cin >> a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }

    // Generating sub arrays 
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {

            // Instead of using a loop, we will use this logic
            // Sum of a subarray = cumSum till last element of current subarray from i=0 - cumSum till i-1 element of current subarray from i=0
            currentSum = cumSum[j] - cumSum[i-1];

            if(currentSum > maxSum) {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    cout << "The max sum is " << maxSum << endl;
    
    // Also writing the max sum subarray
    for(int i=left; i<=right; i++) {
        cout << a[i] << " ";
    }

    return 0;
}