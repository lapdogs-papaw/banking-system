// Customer.cpp
#include "Customer.h"

Customer::Customer(int customerId, const std::string& name)
    : customerId(customerId), name(name) {}

int Customer::getCustomerId() const {
    return customerId;
}

const std::string& Customer::getName() const {
    return name;
}
