// A basic store program using classes and obejcts

#include <iostream>
using namespace std;

class item {
    int itemNo;
    char itemName[10];
    public : 
        void assign();
        void display();
};

void item::assign() {
    cout << "Enter the name of the item : ";
    cin >> itemName;
    cout << "Enter the item number : ";
    cin >> itemNo;
}

void item::display() {
    cout << "The item name is " << itemName;
    cout << " and the item number is " << itemNo << ".\n";
}

int main() {
    item i;
    i.assign();
    i.display();
    return 0;
}