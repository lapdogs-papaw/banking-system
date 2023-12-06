// BankSystem.h
#pragma once
#include <vector>
#include "Account.h"
#include "Customer.h"

class BankSystem {
public:
    void run();

private:
    std::vector<Customer> customers;
    std::vector<Account> accounts;

    void createCustomer(const std::string& name);
    void openAccount(int customerId, double initialBalance);
    void displayCustomerInfo(int customerId) const;
};
