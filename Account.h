#pragma once

#include <string>
#include "Currency.h"

class Account {
private:
    std::string name;
    std::string accountId;
    std::string AccountCode;
    double amount;
    Currency* curr;

public:
    Account();
    Account(std::string n, std::string aid, std::string Accountcode, double amount);

    void withDrawAmount(double amount);
    void Deposit(double amount);
    void displaydetails();

    int GetAmount();
    Currency* getCurrency();
};