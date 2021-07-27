// Maximum sum of sub array
// A subarray consists of continuous numbers.
// Brute force approach
// Time complexity is of the order n3

#include<iostream>
using namespace std; 

int main() {
    int n = 5;
    cin >> n;

    int currentSum = 0;
    int maxSum = 0;

    int left = 0;
    int right = 0;

    int a[100];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Generating sub arrays 
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {

            currentSum = 0;
            for(int k=i; k<=j; k++) {
                currentSum += a[k];
            }

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