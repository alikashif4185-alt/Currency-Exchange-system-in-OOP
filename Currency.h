#pragma once
#include<iostream>
#include<vector>

class Currency {
private:
	std::string name;
	int Exchrate;
	int val;
public:

	Currency() :name(""), Exchrate(0), val(0) {}
	Currency(std::string n, int er, int v) :name(n), Exchrate(er), val(v) {};

	std::string getName();

	virtual double calculateFee(double amount);

	int GetRate();


};
class CryptoCurrency : public Currency {
public:
	double calculateFee(double amount) override {
		return amount * 0.03;
	}
};

class FiatCurrency : public Currency {
public:
	double calculateFee(double amount) override {
		return amount * 0.01;
	}
};