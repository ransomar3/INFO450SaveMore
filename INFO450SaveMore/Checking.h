#pragma once
#include "Account.h"
#include <string>
using namespace std;

class Checking : public Account
{
private:
	double balance;
	int fee;
public:
	Checking();
	Checking(string acctNo, double blnc);
	void Withdraw(double amount);
	void Deposit(double amount);
	void Display();
};
