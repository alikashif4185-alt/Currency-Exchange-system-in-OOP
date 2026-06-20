#include<iostream>
#include<string>
#include<vector>
#include"User.h"
using namespace std;

Users::Users() :name(""), code(0), status(""),rewardamount(0) {};

Users::Users(string n, int c, string s,int ra) :name(n), code(c), status(s),rewardamount(ra) {};

void Users::setUserId(string id) {
	Id = id;
}
void Users::setUsername(string n) {
	name = n;
}

int Users::GetCode()const { return code; }

string Users::Getname()const { return name; }

PremiumUser::PremiumUser() :PremCode("") {};

void PremiumUser::setReward(int rp) {
	rewardamount = rp;
}
PremiumUser::PremiumUser(string n, int c, string s, string pc)
	: Users(n, c, s, 0), PremCode(pc) {
}
void PremiumUser::SetWallet(const Wallet& w) {
	wallet = w;
}

int PremiumUser::GetCode()const { return code; }

string PremiumUser::Getname()const { return name; }

int PremiumUser::GetReward()const {
	return rewardamount * 2;
}
string PremiumUser::GetAccountStatus()const {
	return status;
 }

StandardUsers::StandardUsers() : StandCode("") {}
StandardUsers::StandardUsers(string n, int c, string s, string sc) :Users(n,c,s,0), StandCode(sc) {};

string StandardUsers::Getname()const { return name; }

int StandardUsers::GetCode()const { return code; }

int StandardUsers::GetReward()const { return rewardamount; }

void StandardUsers::setReward(int rp) {
	rewardamount = rp;
}
void StandardUsers::SetWallet(const Wallet& w) {
	wallet = w;
}
string StandardUsers::GetAccountStatus()const { return status; }

GoldUser::GoldUser() : GoldCode("") {};

GoldUser::GoldUser(string n, int c, string s, string gc)
	: Users(n, c, s, 0), GoldCode(gc) {
}
string GoldUser::Getname()const { return name; }

int GoldUser::GetCode()const { return code; }

void GoldUser::setReward(int rp) {
	rewardamount = rp;
}
void GoldUser::SetWallet(const Wallet& w) {
	wallet = w;
}
int GoldUser::GetReward()const { return rewardamount * 3; }

string GoldUser::GetAccountStatus()const { return status; }


