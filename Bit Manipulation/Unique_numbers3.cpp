/* We are given an array containing n numbers. All the numbers are present thrice except for one number is only present once. Find the unique number. We will have 3N + 1 numbers.

Example => 
Input -
7
1 1 1 2 2 2 4
Output - 
4 */

// NOTE - This method can be further used to do 5N + 1, 6N + 1, etc, questions.

// NOTE - Array of fixed size is always counted as constant space or O(1) space

#include<iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;

    int no;
    int count[64] = {0}; // This array does not include the numbers rather sum of their bits. The number of input numbers (3N + 1) can be > 64. 

    for(int i=0; i<n; i++) {
        cin >> no;
        // Update the count array by extracting bits
        int j=0;

        while(no>0) {
            int last_bit = (no & 1);
            count[j] += last_bit;
            j++;
            no = no >> 1; 
        }
    }

    // Iterate over the array and form the answer by converting 0s and 1s into a number 
    int p = 1;
    int ans = 0;

    for(int i=0; i<64; i++) {
        count[i] = count[i] % 3;
        ans += (count[i] * p);
        p = p << 1;
    }

    cout << ans << endl;

    return 0;
}
