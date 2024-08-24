#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    double balance;
public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0." << endl;
        }
        cout << "Account for " << accountHolder << " created with balance: " << balance << endl;
    }
    ~BankAccount() {
        cout << "Account for " << accountHolder << " is being deleted. Final balance: " << balance << endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ", New balance: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ", New balance: " << balance << endl;
        } else {
            cout << "Withdrawal amount invalid or exceeds current balance." << endl;
        }
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    BankAccount myAccount("John Doe", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0);
    return 0;
}
