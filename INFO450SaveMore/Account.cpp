#include "stdafx.h"
#include <string>
#include "Account.h"
#include <iostream>
using namespace std;

// default constructor
Account::Account()
{
	acctNumber = "";
	acctType = "";
	balance = 0;
	interestRate = 0;
}

Account::Account(string acctNo, double blnc)
{
	acctNumber = acctNo;
	balance = blnc;
}

void Account::Withdraw(double amount)
{
	balance = (balance - amount);
}

void Account::Deposit(double amount)
{
	balance = (balance + amount);
}

void Account::DisplayAccount()
{
	cout << "==================================================" << endl;
	cout << "Account Number: " << acctNumber << endl;
	cout << "Account Type: " << acctType << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate applied: " << interestRate << endl;
	cout << "==================================================" << endl;
}
