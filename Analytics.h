#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"ExchageRecords.h"
class Analytics {
	
public:
	int GetTotalTransaction( ExchangeRecords &record);

	std::string MostusedCurrency(ExchangeRecords& history);

	void AvgofTransactionAmount();

	std::string MostFrequentUser(ExchangeRecords & history);

};