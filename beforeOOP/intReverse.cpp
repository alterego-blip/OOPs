// A program to reverse an int and print its value

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    while (n) {
        cout << n % 10;
        n /= 10;
    }
    cout << "\n";
    return 0;
}