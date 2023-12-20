#include <iostream>

class BankAccount {
private:
    double balance;
    int accountNumber;

public:
    BankAccount(int accNumber) : balance(0), accountNumber(accNumber) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Недостаточно средств." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account1(123456);
    account1.deposit(1000);
    std::cout << "Баланс счета: " << account1.getBalance() << std::endl;

    account1.withdraw(500);
    std::cout << "Баланс счета после снятия: " << account1.getBalance() << std::endl;

    account1.withdraw(1000);
    std::cout << "Баланс счета после попытки снятия большей суммы: " << account1.getBalance() << std::endl;

    return 0;
}
