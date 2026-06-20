#include<iostream>
#include<string>
#include<vector>
#include"Analytics.h"
#include"ExchageRecords.h"
#include"Transaction.h"
using namespace std;

int Analytics::GetTotalTransaction(ExchangeRecords& record) {
    std::vector<Transaction> trans = record.GetTransactions();

    return trans.size();
}
std::string Analytics::MostusedCurrency(ExchangeRecords& history)
{
    std::vector<Transaction> trans = history.GetTransactions();

    std::string currency = "";
    int maxCount = 0;

    for (int i = 0; i < trans.size(); i++)
    {
        std::string current =
            trans[i].getfromCurency();

        int count = 0;

        for (int j = 0; j < trans.size(); j++)
        {
            if (trans[j].getfromCurency() == current)
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            currency = current;
        }
    }

    return currency;
}

string Analytics::MostFrequentUser(
    ExchangeRecords& history)
{
    vector<Transaction> trans = history.GetTransactions();

    string user = "";
    int maxCount = 0;

    for (int i = 0; i < trans.size(); i++)
    {
        string currentUser = trans[i].getTransactionId();

        int count = 0;

        for (int j = 0; j < trans.size(); j++) {
            if (trans[j].getTransactionId() == currentUser) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            user = currentUser;
        }
    }

    return user;
}