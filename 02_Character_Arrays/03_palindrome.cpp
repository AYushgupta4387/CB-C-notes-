// A palindrome is a string that is symmetric from middle to both sides. ex - abcba

#include<iostream>
#include<string.h>
using namespace std; 

int main() {
    char a[1000];
    cin.getline(a, 1000);

    int i = 0;

    // int j = (sizeof(a) / sizeof(char)) - 1; We cannot take input this way because it will give 999
    int j = strlen(a) - 1; 

    while(i<j){

        if(a[i] == a[j]) {
            i++;
            j--;
        }
        else {
            cout << "Not a palindromic string";
            break;
        }
    }    
    return 0;
}