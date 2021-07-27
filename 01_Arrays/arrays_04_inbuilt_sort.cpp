#include<iostream>
#include<algorithm> // We will have to include this header file to include sort function
using namespace std; 
 
bool compare(int a, int b) {  // This is a function that is already used in inbuilt sort, we are just modifying it
    return a>b; 
}

int main() {
    
    int n;
    cin >> n;

    int a[100] = {0};

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    // sort(a, a+n); // sort(name_of_array, name_of_array + length_of_array)
                     // This is more efficient then other sorting algorithms.
                     // This will return the array sorted in ascending order.

    // To get the sorted array in descending order, we use compare function.
    sort(a, a+n, compare);

    for(int i=0; i<n; i++) {
        cout << a[i];
    }
    
    return 0;
}