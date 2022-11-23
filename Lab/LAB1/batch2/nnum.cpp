// Input n numbers from the user and find their sum.
#include <iostream>
using namespace std;

int main() {
    int n, a, sum = 0;
    cout << "Enter the number of elements to input : ";
    cin >> n;
    while (n > 0) {
        cout << "Enter a number : ";
        cin >> a;
        sum += a;
        n--;
    }

    cout << "The sum was found to be : " << sum << endl;
    return 0;
}