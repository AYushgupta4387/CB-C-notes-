// Generating sub arrays from a given array
// A subarray consists of continuous numbers.

#include<iostream>
using namespace std; 

int main() {
    int n = 5;
    cin >> n;

    int a[100];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Generating sub arrays 
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            // This prints the elements form i to j
            for(int k=i; k<=j; k++) {
                cout << a[k];
            }
            cout << endl;
        }
    }
    return 0;
}