
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
#include "Account.h"
#include "Wallet.h"

class Users {
protected:
	std::string name;
	int code;
	std::string status;
	std::vector<Account> accounts;
	std::vector<Users*> users;
	int rewardamount;
	std::string Id;
	Wallet wallet;

public:
	Users();
	Users(std::string n, int c, std::string st, int Ramt);

	void setUsername(std::string n);
	void setUserId(std::string id);

	virtual std::string Getname() const;
	virtual int GetCode() const;

	virtual std::string GetAccountStatus() const = 0;
	virtual void SetWallet(const Wallet& w) = 0;
	virtual void setReward(int rp) = 0;
	virtual int GetReward() const = 0;

	virtual ~Users() = default;
};
class PremiumUser : public Users {
private:
	std::string PremCode;

public:
	PremiumUser();
	PremiumUser(std::string n, int c, std::string s, std::string PremCode);

	std::string Getname() const override;
	int GetCode() const override;
	std::string GetAccountStatus() const override;
	int GetReward() const override;
	void setReward(int rp) override;
	void SetWallet(const Wallet& w) override;
};

class StandardUsers : public Users {
private:
	std::string StandCode;

public:
	StandardUsers();
	StandardUsers(std::string n, int c, std::string s, std::string StandCode);

	std::string Getname() const override;
	int GetCode() const override;
	std::string GetAccountStatus() const override;
	int GetReward() const override;
	void setReward(int rp) override;
	void SetWallet(const Wallet& w) override;
};

class GoldUser : public Users {
private:
	std::string GoldCode;

public:
	GoldUser();
	GoldUser(std::string n, int c, std::string s, std::string GoldCode);

	std::string Getname() const override;
	int GetCode() const override;
	std::string GetAccountStatus() const override;
	int GetReward() const override;
	void setReward(int rp) override;
	void SetWallet(const Wallet& w) override;
};