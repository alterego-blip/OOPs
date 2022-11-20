#include <iostream>
using namespace std;

int main() {
    int a, b, q, r;
    cout << "Enter the two numbers : ";
    cin >> a >> b;
    do {
        q = a / b;
        r = a % b;
        a = b;
        b = r;
    } while (r);

    cout << "Their HCF is : " << a << "\n";
    return 0;
}