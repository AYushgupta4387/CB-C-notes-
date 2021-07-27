// Using cin.get() in character arrays

// NOTE - If an array has a defined length of 1000, then it's max index = 999.

#include<iostream>
using namespace std; 

void readline(char a[], int maxLen, char delim) { 
    // The use of delim variable is that now we can input paragraph as we can stop at any particular char

    int i = 0;
    char ch = cin.get(); 
    // cin.get() reads a single character
    // Put a loop to read characters till you get a new line '\n' or you get the delim

    while(ch != delim) {
        a[i] = ch;
        i++;

        if(i == (maxLen - 1)) { 
            // maxLen - 1 because we should reserve last bucket of the array for null character 
            break;
        }
        ch = cin.get();
    }
    // Once out of the loop
    a[i] = '\0';
    
}

int main() {
    
    char a[1000];
    // readline(a, 1000, '$');
    // Instead of using this function, we can use cin.getline()

    cin.getline(a, 1000, '$');

    cout << a << endl;
    return 0;
}