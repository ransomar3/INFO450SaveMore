#pragma once
#include "Account.h"

class Savings : public Account
{
private:
	double savBalance;
	double savAmt;

public:
	Savings();
	Savings(string acctNo, double blnc, int intRate);
	int CalculateMonthlyInterest();
	int Withdraw(double savAmt);
	int Deposit(double savAmt);
	void GetBalance();
	void Display();
};
