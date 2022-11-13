// Calculator app using class

#include <iostream>

using namespace std;

class calculator {
    float a, b;
    public:
    void assign();
    void display();
    void add(){cout << "The sum is : " << a + b << "\n";}
    void sub(){cout << "The difference is : " << a - b << "\n";}
    void mul(){cout << "The product is : " << a * b << "\n";}
    void div(){cout << "The quotient is : " << a / b << "\n";}
};

void calculator::assign() {
    cout << "Enter the operands : ";
    cin >> a >> b;
}

int main() {
    char op;
    calculator c;
    while (1) {
        c.assign();
        cout << "Input the operation to be performed: ";
        cin >> op;
        switch (op) {
            case '+':
                c.add();
                break;
            case '-':
                c.sub();
                break;
            case '*':
                c.mul();
                break;
            case '/':
                c.div();
                break;
            default:
                cout << "Invalid operation\n";
                break;
        }
    }
    return 0;
}