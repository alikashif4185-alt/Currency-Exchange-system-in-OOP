#include<iostream>
#include<string>
#include<vector>
#include"Account.h"
#include"Currency.h"
using namespace std;

Account::Account() :name(""), accountId(""), AccountCode(""), amount(0) {};

Account::Account(string n, string aid, string ac,double a) :name(n), accountId(aid), AccountCode(ac),amount(a) {};

void Account::withDrawAmount(double a) {
	amount -= a;
}
void Account::Deposit(double a) {
	amount += a;
}
void Account::displaydetails() {
	cout << "Currency : " << this->name << endl;
	cout << "Account ID : " << this->accountId << endl;
	cout << "Account Code : " << this->AccountCode << endl;
	cout << "Amount : " << this->amount << endl;

}
int Account::GetAmount() { return amount; }
Currency * Account:: getCurrency() {
	return curr;
}
