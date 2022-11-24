// A bank account application using classes in C++
#include <iostream>
using namespace std;

class bank {
    char firstName[20], lastName[20], accountType[10];
    float accountNumber, balance, minBalance = 3000, accountExists = 0;
    
    public:
        void assign();
        void deposit();
        void withdraw();
        void display();
};

void bank::assign() {
    cout << "Note that a minimum deposit of Rs. " << minBalance << " is required to open a new account.\n";
    cout << "Enter your name : ";
    cin >> firstName >> lastName;
    cout << "Enter the account type : ";
    cin >> accountType;
    cout << "Enter the account number : ";
    cin >> accountNumber;
    deposit();
}

void bank::deposit() {
    float deposit;
    while(!accountExists) {
        cout << "Enter the minimum balance amount of Rs." << minBalance << " to initialise the account.\n";
        cout << "Amount to deposit in Rs : ";
        cin >> deposit;
        if (deposit < minBalance) {
             cout << "The amount requested to be deposited is lower than the minimum balance.\n";
             cout << "Please try again.\n\n";
        } else {
            balance = 0;
            balance += deposit;
            accountExists = 1; // The account has been created.
            return; // To skip the rest of this function body.
        }
    }

    cout << "Enter an amount to deposit : ";
    cin >> deposit;
    if (deposit > 0) balance += deposit;
    else cout << "Invalid amount.\n Try again.\n\n";
}

void bank::withdraw() {
    float withdraw;
    cout << "Enter an amount to withdraw : ";
    cin >> withdraw;
    if ((balance - withdraw) < minBalance) {
        cout << "The amount can't be withdrawn.\n";
        cout << "A minimum balance of Rs." << minBalance << " is required to maintain the account.\n";
        cout << "Please try again.\n\n";
    } else balance -= withdraw;
}

void bank::display() {
    cout << "The account details are as follows.\n";
    cout << "Account holder name : " << firstName << " " << lastName << endl;
    cout << "Account number : " << accountNumber << endl;
    cout << "Account balance : " << balance << "\n\n";
}

int main() {
    bank b;
    char create;
    cout << "Welcome to the bank account application.\n";
    cout << "Do you wish to create a new bank account? Y/N : ";
    cin >> create;
    if (create == 'Y') b.assign(); 
}