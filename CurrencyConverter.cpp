#include<iostream>
#include<string>
#include<vector>
#include"CurrencyConverter.h"
#include"ExchangeRate.h"
using namespace std;

CurrencyConverter::CurrencyConverter():fromCurr(""),ToCurr(""),fromcurr(0),tocurr(0),action(false){}

CurrencyConverter::CurrencyConverter(string f, string t, double fc, double tc, bool a) :fromCurr(f), ToCurr(t), fromcurr(fc), tocurr(tc), action(a) {};

double CurrencyConverter::Convert(double amount, string fromcurr, string tocurr) {
    double rate = exrate.getRate();
    return amount * rate;
}
string CurrencyConverter::getFromCurrency() {
    return fromCurr;
}
string CurrencyConverter::getToCurrency() {
    return ToCurr;
}
int CurrencyConverter::getConvertedAmount() { return tocurr; }

