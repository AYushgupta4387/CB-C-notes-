// Problem - Unique Number 2n + 2
// Given a list of numbers where every number occurs twice except two numbers, find those numbers.
// Example - 3, 2, 3, 5, 6, 5, 2, 7 => unique numbers = 6, 7
// Constraints - Linear time and constant space

#include<iostream>
using namespace std; 

int main() {
    int n;
    int a[100000];
    cin >> n;

    int no;
    int result = 0;

    for(int i=0; i<n; i++) {
        cin >> no;
        a[i] = no;
        result = result ^ no;
    }

    // At this point, result = x ^ y where x and y are unique numbers
    int temp = result;
    int pos = 0; // At position pos, only one unique number will have a set bit

    while((temp & 1) == 0) {
        pos++;
        temp = temp >> 1;
    }

    // The first set bit in result is at position "pos". 
    int mask = (1<<pos);

    // Find those numbers which contain set bit at position pos
    int x = 0;
    int y = 0;

    for(int i=0; i<n; i++) {
        
        if((a[i] & mask) > 0) {
            x = x ^ a[i]; 
        }
    }

    y = x ^ result;

    cout << min(x, y) << " " << max(x, y) << endl;
    return 0;
}