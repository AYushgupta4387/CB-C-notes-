// Piyush and Magical Park Problem on HackerBlocks

#include<iostream>
using namespace std; 

int main() {
    int N, M, k, S;
    cin >> N >> M >> k >> S; 

    char a[100][100];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> a[i][j];
        }
    }

  for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(j != 0) { S--; }

            if(S<k) {break;}

            if (a[i][j] == '.') {
                S = S - 2;
            }
            if (a[i][j] == '*') {
                S = S + 5;
            }
            if (a[i][j] == '#') {
                break;
            }
        }
         cout << S << " ";
    }

    if(S > k) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    cout << S;
    return 0;
}