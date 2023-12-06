// Account.cpp
#include "Account.h"

Account::Account(int accountId, double balance)
    : accountId(accountId), balance(balance) {}

int Account::getAccountId() const {
    return accountId;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        // Handle insufficient funds
    }
}
