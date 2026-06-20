#include<iostream>
#include<string>
#include<vector>
#include"ExchageRecords.h"
using namespace std;

ExchangeRecords::ExchangeRecords() :no(0) {};

std::vector<Transaction> ExchangeRecords::GetTransactions()
{
	return transaction;
}

void ExchangeRecords::addTransaction(Transaction t) {
	transaction.push_back(t);
}

void ExchangeRecords::RemoveTransaction(string tid) {
	for (int i = 0;i < transaction.size();i++) {
		if (transaction[i].getTransactionId() == tid) {
			transaction.erase(transaction.begin() + i);
		}
}
}
void ExchangeRecords::ShowallTransactions(Users u) {
	for (int i = 0;i < transaction.size();i++) {
		cout<<"Name  : "<<u.Getname()<<endl;
		cout << "Transaction ID : " << endl;
		transaction[i].getTransactionId();
		cout << "Total Amount Sended  : " << endl;
		transaction[i].getTotalSentAmount();
	}
}
void ExchangeRecords::PrintTransactionSlip(string TransID) {
	for (int i = 0;i < transaction.size();i++) {
		if (transaction[i].getTransactionId() == TransID) {
			cout << "=============================\n";
			cout << "      TRANSACTION SLIP       \n";
			cout << "=============================\n";

			cout << "Transaction ID : "
				<< transaction[i].getTransactionId() << "\n";

			cout << "From Currency  : "
				<< transaction[i].getfromCurency() << "\n";

			cout << "To Currency    : "
				<< transaction[i].getToCurrency() << "\n";

		cout << "Amount Sent    : "
				<< transaction[i].getTotalSentAmount() << "\n";

			cout << "Amount Received: "
				<< transaction[i].getTotalAmountRecieved() << "\n";

			cout << "=============================\n";
			return;
		}
	}

	cout << "Transaction not found!\n";
		}
	