#include<iostream>
#include<string.h>
using namespace std; 

// Char* strtok(char* s, char* delimiters) // delimiters => indicate and end point
// returns a token on each subsequesnt call
// on the first call function should be passed with string argument for "s"
// on the subsequent calls we should pass the string argument as NULL

int main() {

    char s[100] = "Today is a rainy day";

    char* ptr = strtok(s, " "); // This will store "Today" from the above string in a separate arrray.
    cout << ptr << endl;

    while(ptr!=NULL) {
        ptr = strtok(NULL, " "); // Every time a new array of characters is produced until " " is reached. 
        cout << ptr << endl;
    }

    return 0;
}