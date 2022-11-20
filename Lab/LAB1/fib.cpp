#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, i;
    cout << "Enter the number of terms to consider : ";
    cin >> n;
    a = b = 1;
    for(i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
    return 0;
    
}