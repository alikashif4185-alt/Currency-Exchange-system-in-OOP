#include<iostream>
#include<string>
#include<vector>

using namespace std;

double Cryptocurrency::calculateFee(double amount) {
	return amount * 0.03;
}