#include<iostream>
using namespace std; 

int main() {
    int a[] = {1, 2, 3};
    cout << a << endl; // This returns the starting address of the array

    char b[] = {'a', 'b', 'c', '\0'};
    cout << b << endl;

    // It is always important to end any string with a null character '\0'

    char a1[] = {'h', 'e', 'l', 'l', 'o',}; // size 5 bytes
    char a2[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // size 6 bytes
    char a3[] = "hello"; // size 6 bytes because this automatically ends with a null character
    
    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a3) << endl;

    // We can take input in character arrays in this way too!

    char a4[10]; // Here, it is necessary to mention max characters
    cin >> a4;
    cout << a4 << " " << sizeof(a4);

    return 0;
}