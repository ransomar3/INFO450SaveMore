#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Certificate class declaration with Inheritance on Account class
class CDAccount : public Account
{
private:
	double term;
	double termRateA;
	double termRateB;
	double fee;
	double balance;

public:
	CDAccount();
	void Withdraw(double amount);
	void AssessInterest();
	void Deposit(double amount);
	void Display();
};