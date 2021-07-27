// Remove Consecutive duplicates characters from a string

#include<iostream>
#include<string.h>
using namespace std; 

void remove_duplicates(char a[], int l) {
    
    if (l == 1 or l == 0) {
        return;
    }

    int prev = 0;
    for(int current=1; current<l; current++) {
        // current will just increase if a[prev] = a[current], 
        // else prev index will increase and a[prev] = a[current]
        
        if(a[current] != a[prev]) {
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev + 1] = '\0';
    
    cout << a;

}

int main() {
    
    char a[1000];
    cin.getline(a, 1000);

    int l = strlen(a);

    remove_duplicates(a, l);
    return 0;
}