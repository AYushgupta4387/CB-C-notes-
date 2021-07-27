/* Given a range [L, R], we need to find two integers in this range such that their XOR is maximum among all possible choices of two integers. More Formally, given [L, R], find max (A ^ B) where L <= A, B <= R */
/* Example - 
Input  : L = 8 R = 20
Output : 31
31 is XOR of 15 and 16.  
*/


// APPROACH  
/* A simple solution is to generate all pairs, find their XOR values and finally return the maximum XOR value.
An efficient solution is to consider pattern of binary values from L to R. If we take the XOR of any two numbers for maximum value their first bit will be fixed which will be same as first bit of XOR of L and R itself. 
After observing the technique to get first bit, we can see that if we XOR L and R, the most significant bit of this XOR will tell us the maximum value we can achieve i.e. let XOR of L and R is 1xxx where x can be 0 or 1 then maximum XOR value we can get is 1111 because from L to R we have all possible combination of xxx and it is always possible to choose these bits in such a way from two numbers such that their XOR becomes all 1. It is explained below with some examples, 

Examples 1:
L = 8    R = 20
L ^ R = (01000) ^ (10100) = (11100)
Now as L ^ R is of form (1xxxx) we
can get maximum XOR as (11111) by 
choosing A and B as 15 and 16 (01111 
and 10000)

Examples 2:
L = 16     R = 20
L ^ R = (10000) ^ (10100) = (00100)
Now as L ^ R is of form (1xx) we can 
get maximum xor as (111) by choosing  
A and B as 19 and 20 (10011 and 10100)
*/

#include<iostream>
using namespace std; 
int maxXORInRange(int L, int R) {
    int LXR = L ^ R;

    // Get the position of most significant bit 
    int msbpos = 0;

    while (LXR>0)
    {
        msbpos++;
        LXR >>= 1;
    }

    // construct result by adding 1,
    // msbPos times
    int maxXOR = 0;
    int two = 1; // We start with 1 because, whatever be the values of L and R, we will get a set bit at first posi.
    while (msbpos>0)
    {
        maxXOR += two;
        two <<= 1;
        msbpos--;
    }
 
    return maxXOR;
    
}

int main() {
    int L = 16;
    int R = 20;
    cout << maxXORInRange(L, R) << endl;

    return 0;
}