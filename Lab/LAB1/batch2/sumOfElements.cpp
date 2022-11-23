// A program to find the sum of elements in an array
#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;
    cout << "Enter the number of items in the array : ";
    cin >> n;
    int array[n];

    for (i = 0; i < n; i++) {
        cout << "Enter a number : ";
        cin >> array[i];
    }

    // Finding the sum of elements in the array.
    for (i = 0; i < n; i++) sum += array[i];

    cout << "The sum of elements was found to be : " << sum << "\n";
    return 0;
}