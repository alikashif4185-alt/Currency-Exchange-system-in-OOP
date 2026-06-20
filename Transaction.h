
#pragma once

#include <string>

    class Transaction {
    private:
        std::string TransactionID;
        std::string fromCurr;
        std::string toCurr;
        int noofTrans;
        double sent;
        double Recieved;

    public:
        Transaction();
        Transaction(std::string tid, std::string fr, std::string tc, int noT, double s, double r);

        std::string getTransactionId();
       
    void DisplayTransaction();

    int GetTotalTransactions();

    std::string getfromCurency();

    std::string getToCurrency();
    double getTotalSentAmount();
    double getTotalAmountRecieved();

};