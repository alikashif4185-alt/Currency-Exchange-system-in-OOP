#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Transaction.h"
#include"Users.h"
class ExchangeRecords {
private:
	int no;
	std::vector<Transaction>transaction;
public:
	ExchangeRecords();
	void addTransaction(Transaction t);

	void ShowallTransactions(Users u);

	void RemoveTransaction(std::string Tid);

	std::vector<Transaction>GetTransactions();

	void PrintTransactionSlip(std::string TransID);


};