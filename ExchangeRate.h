#pragma once
#include<iostream>
#include<vector>
#include"Currency.h"
#include"Users.h"
class ExchangeRate {
private:
	
	std::vector<Currency*>currency;
	std::string name;
	int rate;
	int ccount;
	int ucount;
	int code;
	std::vector<Users*>users;
public:
	ExchangeRate() :name(""), rate(0) {};

	ExchangeRate(std::string n, int r) :name(n), rate(r) {};
	std::string Getname();
	int GetCode();
	int getRate();
	void Registration(std::string c,Users *u);
	void addCurrencyToRecord(std::string name,int code);
	void UpdateExchangeRate(int r);
	bool logIntoAccount(std::string name,std::string c);
};