// A program to check the validity of the given date and to display the next date.
#include <iostream>
using namespace std;

class date {
    int d, m, y;
    int leap;

    public:
        void assign();
        int checkValidity();
        void isLeap();
        void createNext();
        void displayNext();
};

void date::assign() {
    cout << "Enter the date in the format dd mm yyyy : ";
    cin >> d >> m >> y;
    cout << "\n";
}

void date::isLeap() {
    if (y % 400 == 0) leap = 1;
    else if (y % 100) leap = 0;
    else if (y % 4) leap = 1;
    else leap = 0;
}

int date::checkValidity() {
    // Checking validity of month.
    if (m < 1 || m > 12) return 0;

    if (m == 2) { // Considering february.
        if (leap && (d < 1 || d > 29)) return 0;
        if (!leap && (d < 1 || d > 28)) return 0;
    }
    if (m <= 7) {
        if (m % 2 &&(d < 1 || d > 31)) return 0;
        if ((m % 2 == 0) && (d < 1 || d > 30)) return 0; // It doesn't matter that we're checking feb's validity again. 
    } else {
        if (m % 2 &&(d < 1 || d > 30)) return 0;
        if ((m % 2 == 0) && (d < 1 || d > 31)) return 0;         
    }

    if (y >= 0) return 1;
    else return 0;
    return 0; // For removing g++ warning.
}

void date::createNext() {
    d++;
    if (!checkValidity()) {
        d = 1;
        m++;
        if (m > 12) {
            m = m % 12;
            y++;
        }
    }
}

void date::displayNext() {
    cout << "The next date is : " << d << " " << m << " " << y << endl;
}

int main() {
    date x;
    x.assign();
    x.isLeap();
    if (x.checkValidity()) cout << "The date is valid.\n";
    else {
        cout << "The date is invalid.\n";
        return 0;
    }

    x.createNext();
    x.displayNext();
    return 0;
}