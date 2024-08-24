#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, string number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
        cout << "Bank account for " << accountHolderName << " created successfully." << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Bank account for " << accountHolderName << " closed." << endl;
    }

    // Deposit method
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance is $" << balance << "." << endl;
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance is $" << balance << "." << endl;
        }
    }

    // Display account information
    void displayInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a bank account object
    BankAccount account("John Doe", "1234567890", 1000.0);

    // Displaying account information
    account.displayInfo();

    // Depositing money
    account.deposit(500.0);

    // Withdrawing money
    account.withdraw(200.0);

    // Attempting to withdraw more than the balance
    account.withdraw(1500.0);

    return 0;
}

