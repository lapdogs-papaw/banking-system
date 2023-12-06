// Customer.h
#pragma once
#include <string>

class Customer {
public:
    Customer(int customerId, const std::string& name);
    int getCustomerId() const;
    const std::string& getName() const;

private:
    int customerId;
    std::string name;
};
