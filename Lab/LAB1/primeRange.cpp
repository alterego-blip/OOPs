#include <iostream>
using namespace std;

int main() {
    int a, b, i, j, check = 1;
    cout << "Enter the range : ";
    cin >> a >> b;

    for (i = a; i <= b; i++) {
        if (i == 2) {
            cout << "2 ";
            continue;
        }
        else if (i < 2) {
            continue;
        }

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                check = 0;
                break;
            }
        }  

        if (check) cout << i << " ";
        check = 1;
    }
    cout << "\n";
    return 0;
}