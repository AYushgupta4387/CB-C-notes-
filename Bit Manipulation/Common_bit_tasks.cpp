/* IMPORTANT
Clear => make that bit 0
Set => make that bit 1
In binary format, -1 = 111111111111111 (all ones)
~(0) = -1
2^b - 1 = b times 1, example => 2^5 - 1 = 31 = 11111 
1 << b = 2^b - 1 */

#include<iostream>
using namespace std; 

int isOdd(int n) {
    /* We can check if a number is odd or even by taking its & with 1, if it returns 1, then it is odd, otherwise even. */

    return(n & 1);
}

int getBit(int n, int i) {
    // Find ith bit

    /* To find if the ith bit of a number is 1 or 0, we can again take its ith bit's & with 1 << i (this is called a mask) and tell if the number returned is greater than 0 or not. If it is > 0, then ith bit is set, i.e., = 1. */

    // NOTE - here, 1st bit (that represents 2^0) is at i = 0.

    int mask = 1 << i;
    int bit = (n & mask) > 0 ? 1 : 0;

    return bit;
}

int setBit(int n, int i) {
    // To set the ith bit of n to 1

    // NOTE - here, 1st bit (that represents 2^0) is at i = 0.

    int mask = (1 << i);
    int ans = n | mask; 

    return ans;
}

void clearBit(int &n, int i) {
    // To clear the bit at ith position, this will only change 1 at ith position to 0

    // NOTE - here, 1st bit (that represents 2^0) is at i = 0.

    int mask = ~(1 << i);
    n = n & mask;
} 

void updateBit(int &n, int i, int v) {
    // To change a bit at ith position to v, v = 1 or 0, given as input

    // NOTE - here, 1st bit (that represents 2^0) is at i = 0.

    int mask = ~(1 << i);
    int cleared_n = n & mask; // We are first clearing because, we need to make sure that the bit at ith position = 0
    n = cleared_n | (v << i);
}

int clearLastIBits(int n, int i) {
    // To clear last i bits

    // *NOTE* - here, 1st bit (that represents 2^0) is at i = 1.

    int mask = (-1 << i); // In binary format, -1 = 111111111111111 (all ones)
    return n & mask;
}

int clearRangeItoJ(int n, int i, int j) {
    // To clear bits in the range i to j, inclusive of both i and j

    // NOTE - here, 1st bit (that represents 2^0) is at i = 0.

    int ones = (~0); // ~(0) = -1
    int a = ones << (j + 1);
    int b = (1 << i) - 1; // 2^b - 1 = b times 1, example => 2^5 - 1 = 31 = 11111
    int mask = a | b;
    int ans = n & mask;
    return ans;
}

int main() {
    int n = 31;
    int i = 1;
    int j = 3;
    int v = 1;

    // cout << isOdd(n) << endl;
    // cout << getBit(n, i) << endl;
    // cout << setBit(n, i) << endl;

    // clearBit(n, i);
    // cout << n << endl;

    // updateBit(n, i, v);
    // cout << n << endl;

    // cout << clearLastIBits(n, i) << endl;

    cout << clearRangeItoJ(n, i, j) << endl;

    return 0;
}