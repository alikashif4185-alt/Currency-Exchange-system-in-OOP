#pragma once

#include <string>
#include <vector>
#include "Account.h"

class Wallet {
private:
    std::string name;
    std::string RegNo;
    std::vector<Account> account;
    std::string status;

public:
    Wallet();
    Wallet(std::string n, std::string rn, std::string s);

    void SetWallet(std::vector<Account> accs);
    void AddAccount(Account acc);

    std::string GetRegNo();
    void showWalletDetails();
    std::string ShowStatus();
};