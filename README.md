Simple Banking System

This is a simple banking system implemented in C++. It allows users to perform basic banking operations such as opening an account, checking balance, making payments and printing passbook.


Features


Opening Account: Users can open a new account by providing their name and initial balance. The system assigns a unique account number to the user.
Checking Balance: Users can check the current balance of their account by providing their account number.

Making Payment: Users can make an online payment from their account by providing their account number and the amount to be paid. The system checks if there is sufficient balance in the account and updates the balance if the payment is successful.

Printing Passbook: Users can print their account passbook, which displays their account holder name, account number, and transaction history.

Account Storage: The system stores account information in a map data structure. Each account is associated with a unique account number, and the account details are stored as a struct containing the account holder's name and balance.

Account Number Generation: The system generates a unique account number for each new account opened. The account number starts from 1001 and increments by 1 for each new account.

Usage

The program prompts the user to select from the following options:

1 to open account

2 to check balance

3 to make payment

4 to print passbook

5 to quit

When the user selects an option, the program performs the corresponding operation.

Conclusion

This simple banking system demonstrates basic banking operations and provides a foundation for further development. By implementing the above improvements and adding additional features, it could become a fully functional banking system.
