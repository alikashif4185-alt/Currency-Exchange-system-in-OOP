#include<iostream>
#include<string>
#include<vector>

using namespace std;
#include"Wallet.h"

Wallet::Wallet() :name(""), RegNo(""),status("") {};

Wallet::Wallet(string n, string rn,string s) :name(n), RegNo(rn),status(s) {};

string Wallet::GetRegNo() { return RegNo; }

void Wallet::showWalletDetails() {
	cout << "======== Welcome To " << name << " Wallet =============" << endl;
	cout << "Name : " << name << endl;
	cout << "Registration No : " << RegNo << endl;
	cout << "Wallet Type : " << status << endl;
}
string Wallet::ShowStatus() { return status; }
void Wallet::AddAccount(Account acc)
{
	account.push_back(acc);
}
void Wallet::SetWallet(std::vector<Account> accs)
{
	account = accs;
}