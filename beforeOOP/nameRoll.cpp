// A program to input name, roll and display it.

#include <iostream>
using namespace std;

int main() {
    int roll;
    char firstName[10], lastName[10];
    cout << "Enter your roll : ";
    cin >> roll;
    cout << "Enter your name : ";
    cin >> firstName >> lastName;
    cout << "Your roll is " << roll << " and your name is " << firstName << " " << lastName << "\n";
    return 0; 
}