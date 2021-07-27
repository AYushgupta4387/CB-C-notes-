#include<iostream>
using namespace std; 

void spiral_print(int a[][1000], int m, int n) {
    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(startCol<=endCol and startRow<=endRow) {
        // First Row
        for(int i=startCol; i<=endCol; i++) {
            cout << a[startRow][i] << " ";
        }
        startRow++;

        // Last Col
        for (int i=startRow; i<=endRow; i++) {
            cout << a[i][endCol] << " ";
        }
        endCol--;
        
        if(endRow > startRow) {
            // Last Row
            for(int i=endCol; i>=startCol; i--) {
                cout << a[endRow][i] << " ";
            }
            endRow--;
        }

        if(endCol > startCol) {
            // First Col
            for (int i=endRow; i>=startRow; i--) {
                cout << a[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main() {
    int a[1000][1000] = {0};
    int m = 4, n = 4;
    // cin >> m >> n;

    int val = 1;

    for(int row=0; row<m; row++) {
        for(int col=0; col<n; col++) {
            a[row][col] = val;
            val++;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}