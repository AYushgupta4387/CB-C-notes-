#include<iostream>
#include<string>
using namespace std; 

int main() {
    // Different ways to declare strings
    string s1 = "Hello!";
    string s2("Hello!");
    string s3(s2);
    string s4 = s2;

    char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    string s5(a);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    // How to input strings

      // First Method -
    string sa;
    cin >> sa; // This will stop the input if there is a space or a new line character
    cout << sa << endl;
    
      // Second Method - 
    int t; // t = no of lines to take input 
    cin >> t;
    cin.ignore(); // this makes the compiler to ignore new line character after t, in the input
    while(t--) {
        string sc;
        getline(cin, sc);
        cout << sc << endl;
    }

    // How to iterate through the string
    string sb = "Hello";
    for(int i=0; i<sb.length(); i++) {
        cout << sb[i];
    }

    // Empty function - Checks if a string is empty or not. This is a boolean function
    string s6;
    if(s6.empty()) {
        cout << "s0 is empty" << endl;
    }

    // Append function - Adds something at the end of string.
    string s7 = "Hello";
    s7.append(" World");
    cout << s7 << endl;

    s7 += " and Humans!";
    cout << s7 << endl;

    // Clear function - Removes everything from a string.
    // Length function - Gives length
    string s8 = "Hello World!";
    cout << "Before clear, length is " << s8.length() << endl;

    s8.clear();
    cout << "After clear, length is " << s8.length() << endl;

    // Compare function - Compares 2 strings lexiographically. Returns 0, if equal, else returns an int > or < 0.
    string s9 = "Mango";
    string s10 = "Apple";

    cout << s9.compare(s10) << endl;
    cout << s10.compare(s9) << endl;
    cout << s9.compare(s9) << endl;

    // Comparision operators - These can be used as they are overloaded for strings
    if(s9 > s10) {
        cout << "Mango is greater than Apple" << endl;
    }
    cout << s9[0] << endl;

    // Finding subarray
    string s11 = "I want to have apple juice.";
    int index = s11.find("apple"); // This returns index of first letter if that word is present, else returns -1.
    cout << index << endl;

    // Removing subarray
    string word = "apple";
    int len = word.length();
    s11.erase(index, len);
    cout << s11 << endl;
    
    // Iterating over all the characters of the string
    string s12 = "Mango";
    for(int i=0; i<s12.length(); i++) {
        cout << s12[i] << ", ";
    }
    cout << endl;

    // Iterators
    for(auto i = s12.begin(); i != s12.end(); i++) {
        cout <<  (*i) << ", ";
    }





    return 0;
}