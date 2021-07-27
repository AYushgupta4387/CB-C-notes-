// Problem - Unique Number 2n + 1
// Given a list of numbers where every number occurs twice except one, find that number
// Example - 3, 2, 3, 5, 6, 5, 2 => unique number = 6
// Using BitWise XOR operator to solve

#include<iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;

    int no;
    int ans = 0;

    for(int i=0; i<n; i++) {
        cin >> no;
        ans = ans ^ no;
    }

    cout << ans << endl;
    return 0;
}