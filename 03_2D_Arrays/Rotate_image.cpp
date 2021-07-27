//Rotating a 2X2 array by 90 deg
// This question is done in 2 ways.

#include<iostream>
#include<algorithm>
using namespace std; 

void rotate(int a[1000][1000], int m, int n) {

    // Reversing the array
    for(int i=0; i<m; i++) {
        int startCol = 0;
        int endCol = m-1;
        
        while(startCol < endCol) {
            swap(a[i][startCol], a[i][endCol]);
            endCol--;
            startCol++;
        }
    }

    // Transposing the array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    // Printing the array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// Same function using STL 
void rotate_stl(int a[][1000], int m, int n) {
    
    // Reversing the array
    for(int i=0; i<m; i++) {
        reverse(a[i], a[i]+n);
    }

    // Transposing the array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(i < j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }

     // Printing the array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4, m = 4;
    int a[1000][1000];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
        cout << endl;
    }

    //rotate(a, m, n);
    rotate_stl(a, m, n);
    return 0;
}