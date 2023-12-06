// Account.h
#pragma once

class Account {
public:
    Account(int accountId, double balance);
    int getAccountId() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);

private:
    int accountId;
    double balance;
};
