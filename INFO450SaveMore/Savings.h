#pragma once
#include "Account.h"

class Savings : public Account
{
private:
	double interestRate;
	int fee;

public:
	Savings();
	Savings(string acctNo, string type, double blnc, int intRate, int saveFee);
	int CalculateMonthlyInterest();
	void Display();
	void GetBalance();
};
