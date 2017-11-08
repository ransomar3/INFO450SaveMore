#pragma once
#include "Account.h"
#include <string>
using namespace std;

class CDAccount : public Account
{
private:
	int term; 
	int cdFee;
	double balance;
public:
	// CDAccount
	CDAccount();
	void Withdraw();
	void Deposit();
	void Display();
};