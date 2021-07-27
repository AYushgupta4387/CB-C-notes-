// Given a number N, count set bits in it's binary representation.
// Example - N = 13, 13 = 1101, Therefore, setBitCount = 3.

// NOTE - Any number N has log N + 1 bits. (Base = 2) Example - log 15 = 3 + 1 = 4 bits

#include<iostream>
using namespace std; 

//First Method - Order of this method = O(number of bits in a number)
int countBits(int n) {
    int ans = 0;

    while (n>0) {
        ans += (n&1);
        n = n >> 1;
    }
    return ans;
}

// Second Method - Order of this method = O(number of set bits in a number)
int countBitsFaster(int n) {
    int ans = 0;

    while(n>0) {
        n = n & (n-1);
        ans++;
    }
    return ans;
}

int main() {
    int n = 255;

    cout << countBits(n) << endl;
    cout << countBitsFaster(n) << endl;

    // Third Method - Built in method
    cout << __builtin_popcount(n) << endl;

    return 0;
}