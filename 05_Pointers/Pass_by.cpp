#include<iostream>
using namespace std; 

/*
void increament(int a) {
    a++;
    cout << "Inside Function : " << a << endl; // This returns 11
}
*/

//USING PASS BY REFERENCE METHOD
void increament(int* aptr) {
    *aptr = *aptr + 1;
    cout << "Inside Function : " << *aptr << endl; // This returns 11
}

int main() {
    int a = 10;

    //increament(a);
    increament(&a);

    cout << "Inside Main : " << a << endl; // This was returning 10 initially, now it will return 11
    return 0;
}