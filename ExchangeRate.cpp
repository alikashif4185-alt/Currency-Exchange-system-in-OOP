#include<iostream>
#include<vector>
#include<string>
#include"ExchangeRate.h"
#include"Users.h"
using namespace std;

ExchangeRate::ExchangeRate() :name(""), rate(0) {};
ExchangeRate::ExchangeRate(string n, int r) :name(n), rate(r) {};

void ExchangeRate::Registration(string code,Users *u) {
	users.push_back(u);

}
string ExchangeRate::Getname() {
	return name;
}
int ExchangeRate::GetCode() { return code; }
int ExchangeRate::getRate() { return rate; }


bool ExchangeRate::logIntoAccount(string name, string c) {
	for (int i = 0;i < users.size();i++) {
		if (users[i]->Getname() == name && users[i]->GetCode() == code) {
			cout << "Welcome User :" << this->Getname() << " To the Account!!!" << endl;
			return true;
		}
		return false;
}
}

void ExchangeRate::addCurrencyToRecord(string name, int code) {
	
}

void ExchangeRate::UpdateExchangeRate(int r) {
	rate = r;
}

