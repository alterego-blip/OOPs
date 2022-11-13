// Check validity of a triangle and diplay sides, find area and display.

#include <iostream>
#include <cmath>

using namespace std;

class triangle {
    float a, b, c;
    int validity;
    public:
        void assign();
        void checkval();
        void displaySides();
        void displayArea();
};

void triangle::assign() {
    cout << "Enter the sides of the triangle (a b c) : ";
    cin >> a >> b >> c;
}

void triangle::checkval() {
    if ( a + b > c && b + c > a && c + a > b) {
        cout << "The triangle is valid.\n";
        validity = 1;
    }
    else {
        cout << "The triangle is invalid.\n";
        validity = 0;
    }
}

void triangle::displaySides() {
    cout << "The given sides are : " << a << ", " << b << " and " << c << "\n"; 
}

void triangle::displayArea() {
    float s, area;
    if (validity) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The are of the triangle is " << area << "\n";
    }
}

int main() {
    triangle t;
    t.assign();
    t.checkval();
    t.displaySides();
    t.displayArea();
    return 0;
}