#include <iostream>
using namespace std;

int main() {
    int n, i, check = 1;
    cout << "Enter the number to consider : ";
    cin >> n;
    if (n == 2) {
        cout << "Yes.\n";
        return 0;
    } else if (n < 2) {
        cout << "No.\n";
        return 0;
    }
    
    for (i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            check = 0;
            break;
        }
    }

    if (check) cout << "Yes.\n";
    else cout << "No.\n";
    return 0;
}