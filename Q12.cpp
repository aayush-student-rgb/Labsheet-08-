#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double amount = 0) {
        balance = (amount >= 0) ? amount : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0)
            cout << "Invalid withdrawal amount.\n";

        else if (amount > balance)
            cout << "Insufficient balance.\n";

        else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    double initialBalance, amount;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    account.displayBalance();

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.displayBalance();

    return 0;
}