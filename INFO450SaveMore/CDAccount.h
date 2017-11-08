#pragma once
#include "Account.h"
#include <string>
using namespace std;

// Certificate class declaration with Inheritance on Account class
class CDAccount : public Account
{
private:
	int term;
	int termRate; 
	int fee;
	double balance;

public:
	CDAccount();
	void Withdraw(double amount);
	void Deposit(double amount);
	void Display();
};