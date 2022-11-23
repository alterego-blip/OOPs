// A program to check if a string is a palindrome or not
#include <iostream>
using namespace std;

int main() {
    char string[50];
    int j, palindrome, i = 0;
    palindrome = 1;

    cout << "Enter the string : ";
    cin >> string;
    
    // Loop to find actual length of the string
    while (string[i++] != '\0');
    i--; // Since the length is including the end of string character.

    for (j = 0; j < i / 2; j++) { // Not that i / 2 is integer division.
        if (string[j] != string[i - j - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) cout << "The given string is a palindrome.\n";
    else cout << "The given string is not a palindrome.\n";
    return 0;
}