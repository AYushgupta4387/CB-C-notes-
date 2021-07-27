#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[1000];

    int no;

    for(int i=0; i<n; i++) {
        cin >> no;
        int j = 0;

        while(no>0) {
            a[j] = a[j] + (no & 1);
            j++;
            no = no >> 1;
            
        }        
    }

    int one = 1;
    int result = 0;

    for(int i=0; i<64; i++) {
        a[i] = a[i] % 3;
        result = result + (a[i] * one);
        one = one << 1;
    }

    cout << result;
}
