#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"ExchangeRate.h"
class CurrencyConverter {
private:
	ExchangeRate exrate;
	std::string fromCurr;
	std::string ToCurr;
	double fromcurr;
	double tocurr;
	bool action;
public:
	CurrencyConverter();
	CurrencyConverter(std::string fc, std::string tc, double f, double t, bool a);

	double Convert(double amount, std::string fromCurrency,std::string toCurrency);

	std::string getFromCurrency();
	std::string getToCurrency();

	int getConvertedAmount();

};