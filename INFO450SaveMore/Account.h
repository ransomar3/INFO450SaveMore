#pragma once
#include <string>
using namespace std;

// Class declaration for bank account object 
class Account
{
protected: 
	string acctNumber;
	string acctType;
	double balance;
	int interestRate;

public:
	Account();
	Account(string acctNo, double blnc);
	virtual void Withdraw(double amount) = 0;
	virtual void Deposit(double amount) = 0;
	virtual void DisplayAccount(); 
};