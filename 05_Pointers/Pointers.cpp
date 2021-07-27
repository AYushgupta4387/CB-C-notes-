#include<iostream>
using namespace std; 

int main() {
    // Pointer => Data type that holds the address of other data types

    int a=3;
    int* b = &a; // Here, b is a pointer that points towards address of a
    // & => (Address of) operator

    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;

    // * => (Value at) / Dereference operator
    cout << "The value at address b is " << *b <<endl;

    //Pointer to pointer => Stores the address of a pointer
    int** c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    // Pointers in Arrays

    int marks[] = {40, 80, 93, 51};

    int* p = marks; // Here, we don't use "&" to denote address, just name of array.

    cout << "The value at address p is " << *p << endl; // Gives value at index 0
    cout << "The value at address p+1 is " << *(p+1) << endl; // Gives value at index 1
    cout << "The value at address p+2 is " << *(p+2) << endl; // Gives value at index 2
    cout << "The value at address p+3 is " << *(p+3) << endl; // Gives value at index 3

    // It doesn't work for char variables

    char ch = 'A';
    // cout << &ch << endl; // Here, it did not return the address

    // Here, we can use explicit typecasting from char* to void*
    cout << (void*)&ch << endl;

    // Pointers
    int x =100;
    int* xptr = &x;
    cout << xptr << endl;


    
    return 0;
}
