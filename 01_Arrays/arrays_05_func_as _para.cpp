// PASSING FUNCTIONS AS PARAMETERS
// Using a compare function in Bubble sorting

#include<iostream>
using namespace std; 

bool compare(int a, int b) { 
    cout << "Comparing " << a << " and " << b << endl; 
    return a>b; 
}

void bubble_sort(int a[], int n, bool (&cmp) (int a, int b)) {
    for(int i=1; i<n; i++) {
        for(int j=0; j <= (n-i-1); j++) {
            if (cmp(a[j], a[j+1])) {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[100];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    bubble_sort(a, n, compare);
    
    return 0;
}