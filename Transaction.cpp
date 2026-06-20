#include<iostream>
#include<string>
#include<vector>
#include"Transaction.h"
using namespace std;

Transaction::Transaction() :TransactionID(""), fromCurr(""), toCurr(""), noofTrans(0), sent(0), Recieved(0) {};

Transaction::Transaction(string tid, string fc, string tc, int noT, double s, double r) :TransactionID(tid), fromCurr(fc), toCurr(tc), noofTrans(noT), sent(s), Recieved(r) {};

void Transaction::DisplayTransaction() {
	cout << "Transaction ID : " << this->TransactionID << endl;
	cout << "Source Currency : " << this->fromCurr << endl;
	cout << "To : " << this->toCurr << endl;
	cout << "Amount from : " << sent << endl;
	cout << "Amount Recieved : " << Recieved << endl;
}
int Transaction::GetTotalTransactions() {
	return noofTrans;
}
double Transaction::getTotalSentAmount() { return sent; }

string Transaction::getTransactionId() { return TransactionID; }

string Transaction::getfromCurency() {
	return fromCurr;
}
string Transaction::getToCurrency() { return toCurr; }

double Transaction::getTotalAmountRecieved() { return Recieved; }




