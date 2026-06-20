#pragma once
#include<iostream>
#include<vector>
#include"Currency.h"
#include"ExchangeRate.h"
class Admin {
private:
	std::string name;
	int csize;
	int usize;
	int code;
	std::vector<Currency*>currency;
public:
	Admin() :name("") {};
	Admin(std::string n) :name(n) {};

	std::string Getname();
	void addCurrency(ExchangeRate& er);
	int getTotalActiveUsers();







};