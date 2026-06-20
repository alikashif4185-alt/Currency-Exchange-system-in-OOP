#include<iostream>
#include<string>
#include<vector>
#include "CurrencyConverter.h"
#include "ExchageRecords.h"
#include "Transaction.h"
#include "Account.h"
#include "Analytics.h"
#include "Admin.h"
#include "User.h"
#include"Wallet.h"
using namespace std;

int main()
{
    // =========================
    // SYSTEM OBJECTS
    // =========================
    CurrencyConverter converter;
    ExchangeRecords history;
    ExchangeRate rate;
    Admin a;
    Analytics analytics;
    // =========================
    // CREATE USER
    // =========================

    cout << "============Admin Section===============" << endl;
    a.addCurrency(rate);
    cout << "Currency Added!" << endl;
    cout << "Total Uses Active : " << endl;
    a.getTotalActiveUsers();
    cout << "Name of Admin : " << endl;
    a.Getname();


    PremiumUser puser;
    puser.setUserId("U001");
    puser.setUsername("Ali");

    GoldUser gu;
    gu.setUserId("U102");

    // =========================
    // CREATE WALLET
    // =========================
    Wallet wallet;

    // Accounts inside wallet
    Account acc1("Standard", "USD","10004",50);
    Account acc2("Gold", "PKR", "10005", 50000);
    Account acc3("Premium", "BTC","10006", 0.5);

    wallet.AddAccount(acc1);

    puser.SetWallet(wallet);

    // =========================
    // INPUT TRANSACTION
    // =========================
    double amount;
    string from, to;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "From currency: ";
    cin >> from;

    cout << "To currency: ";
    cin >> to;
    GoldUser* g;
    cout << "=========================================================" << endl;

    cout << "===============Exchange Rate Section==============" << endl;
    rate.addCurrencyToRecord("Quwait Denaar", 1230);
    cout << "Currency Added!!!!" << endl;
    rate.logIntoAccount("Ali", "U001");
    cout << "You are Logged into Account!!!" << endl;
    rate.Registration("U102", g);
    cout << "User Registered!" << endl;

    rate.UpdateExchangeRate(300);



    double converted = converter.Convert(amount, from, to);

    cout << "\nConverted Amount: " << converted << endl;

    Transaction t("T001","USD", "SR", 1, 50, 700);
  
    history.addTransaction(t);

    cout << "\n--- TRANSACTION HISTORY ---\n";
    //history.ShowallTransactions();

    cout << "\n--- TRANSACTION SLIP ---\n";
    history.PrintTransactionSlip("T001");

    history.RemoveTransaction("T001");

    analytics.GetTotalTransaction(history);

    analytics.MostFrequentUser(history);

    analytics.MostusedCurrency(history);

    return 0;
}