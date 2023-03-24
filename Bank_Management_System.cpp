#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

// Account structure
struct Account {
    string name;
    double balance;
};

// Map to store accounts
map<int, Account> accounts;

// Global variable to keep track of the next account number
int next_account_number = 1001;

// Function to open a new account
void open_account() {
    string name;
    double initial_balance;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter initial balance: ";
    cin >> initial_balance;
    Account account = {name, initial_balance};
    accounts[next_account_number] = account;
    cout << "Account opened. Your account number is " << next_account_number << "." << endl;
    next_account_number++;
}

// Function to check current balance
void check_balance(int account_number) {
    if (accounts.find(account_number) != accounts.end()) {
        cout << "Current balance: " << fixed << setprecision(2) << accounts[account_number].balance << endl;
    } else {
        cout << "Account not found." << endl;
    }
}

// Function to make an online payment
void make_payment(int account_number, double amount) {
    if (accounts.find(account_number) != accounts.end()) {
        if (accounts[account_number].balance >= amount) {
            accounts[account_number].balance -= amount;
            cout << "Payment successful. Current balance: " << fixed << setprecision(2) << accounts[account_number].balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    } else {
        cout << "Account not found." << endl;
    }
}

// Function to print account passbook
void print_passbook(int account_number) {
    if (accounts.find(account_number) != accounts.end()) {
        cout << "Account holder: " << accounts[account_number].name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Transactions:" << endl;
        // TODO: Implement transaction history
    } else {
        cout << "Account not found." << endl;
    }
}

int main() {
    int choice;
    int account_number;
    double amount;

    do {
        cout << "Enter 1 to open account, 2 to check balance, 3 to make payment, 4 to print passbook, or 5 to quit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                open_account();
                break;
            case 2:
                cout << "Enter account number: ";
                cin >> account_number;
                check_balance(account_number);
                break;
            case 3:
                cout << "Enter account number: ";
                cin >> account_number;
                cout << "Enter amount: ";
                cin >> amount;
                make_payment(account_number, amount);
                break;
            case 4:
                cout << "Enter account number: ";
                cin >> account_number;
                print_passbook(account_number);
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}