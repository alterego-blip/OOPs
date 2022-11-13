// A calendar app using classes and objects.

#include <iostream>

using namespace std;

class calendar {
    int date, month, year;
    public:
        void assign();
        void display();
};

void calendar::assign() {
    cout << "Enter the date, month and year in the format dd mm yyy : ";
    cin >> date >> month >> year;
}

void calendar::display() {
    // To display date
    if (date % 10 == 1 && date != 11) cout << date << "st ";
    else if (date % 20 == 2) cout << date << "nd ";
    else if (date % 20 == 3) cout << date << "rd ";
    else cout << date << "th ";

    // Displaying month

    switch (month)
    {
    case 1:
        cout << "January ";
        break;
    case 2:
        cout << "February ";
        break;
    case 3:
        cout << "March ";
        break;
    case 4:
        cout << "April ";
        break;
    case 5:
        cout << "May ";
        break;
    case 6:
        cout << "June ";
        break;
    case 7:
        cout << "July ";
        break;
    case 8:
        cout << "August ";
        break;
    case 9:
        cout << "September ";
        break;
    case 10:
        cout << "October ";
        break;
    case 11:
        cout << "November ";
        break;
    case 12:
        cout << "December ";
        break;
    default:
        break;
    } 

    // Displaying year
    cout << year << "\n"; 
}

int main() {
    calendar c;
    while (1) {
        c.assign();
        c.display();
    }

    return 0;
}