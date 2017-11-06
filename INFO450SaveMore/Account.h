#pragma once
#include <string>
using namespace std;

// Class declaration for bank account object 
class Account
{
protected: 
	string acctNumber;
	double balance;
	int interestRate;

public:
	Account();
	Account(string acctNo, double blnc, int intRate);
	virtual void DisplayAccount();
	virtual void Display(); 
};