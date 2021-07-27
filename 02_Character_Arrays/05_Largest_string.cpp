// Question - Read N, followed by N strings and print the largest string and its length.

/* Solution - Instead of storing all the strings, we will only store 2 strings, that are -
 1) Largest string till now
 2) Current String */

#include<iostream>
#include<string.h>
using namespace std; 

int main() {
    
    int n;
    cin >> n;

    char a[1000];
    char largest[1000];

    int len = 0;
    int largest_len = 0;

    cin.get(); /* This cin.get() is here because after inputing n, there is newline character '\n' there which is read by the cin.getline() and this is counted as an empty string. 
    To avoid this we use extra cin.get() here. */

    for(int i=0; i<n; i++) {
        cin.getline(a, 1000);
        len = strlen(a);

        if(len>largest_len) {
            largest_len = len;
            strcpy(largest, a); // This will copy the characters from a to largest array
        }
    }

    cout << largest << " and "  << largest_len;
    return 0;
}