//Searching for key in a sorted (both rowise and coloumnwise) 2D array using staircase method (n time complexity).

/*
Example input -
1 4 8 10 
2 5 9 15
6 16 18 20 
11 17 19 23
*/

#include<iostream>
using namespace std; 

void staircase_search(int a[1000][1000], int m, int n, int key) {

    int row = 0;
    int col = m-1; 

    while(key != a[row][col]) {
        if (a[row][col] > key) {
            col--;
        }
        if (a[row][col] < key) {
            row++;
        }
    }

    cout << "row is " << row << " and col is " << col;   
}

int main() {
    int n, m, key;
    cin >> m >> n >> key;

    int a[1000][1000];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    staircase_search(a, m, n, key);
    return 0;
}