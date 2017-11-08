#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Inheritance of Account class & other defined variables/constructors for Savints
class Savings : public Account
{
private:
	double interestRate;
	double balance;
	double fee;

public:
	Savings(string acctNo, double blnc);
	void CreateAccount();
	void AssessInterest();
	void Withdraw(double amount);
	void Deposit(double amount);
	void Display();
};
