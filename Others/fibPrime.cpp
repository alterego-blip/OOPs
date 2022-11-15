#include <iostream>
using namespace std;

int isPrime(int);

int main() {
    int n, a, b, c, i;
    
    cout << "Enter the number of fibonacci terms to consider : ";
    cin >> n;

    a = b = 1;

    for (i = 0; i < n; i++) {
        if (isPrime(a)) cout << a << "\n";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int isPrime(int n) {
    int i;
    if (n == 2) return 1;
    if (n < 2) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}