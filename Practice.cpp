#include<iostream>
using namespace std; 

int main() {
    
    int t;
    cin >> t;

    int no;
    int count;

    for(int i=0; i<t; i++) {
        cin >> no;
        count = no;

        while(no > 0) {
            no = no & (no - 1);
            count--;
        }

        cout << count << endl;
    }

    return 0;
}