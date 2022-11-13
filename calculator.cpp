// A calculator

#include <iostream>

using namespace std;

int main() {
    float a, b, o;
    char op;
    while (1) {
        cout << "Enter the operation : ";
        cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            o = a + b;
            break;
        case '-':
            o = a - b;
            break;
        case '*':
            o = a * b;
            break;
        case '/':
            o = a / b;
            break;
        default:
            cout << "Invalid input. Try again \n";
            break;
        }
        cout << "The output is : " << o << "\n";
    }

    return 0;
}