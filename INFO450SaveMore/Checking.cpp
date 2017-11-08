#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Checking.h"
using namespace std;

Checking::Checking() : Account()
{
	fee = 5.00;
}

Checking::Checking(string acctNo, double blnc) : Account(acctNo, blnc)
{
	interestRate = 0;
}

void Checking::CreateAccount()
{

}

void Checking::OrderChecks(double checks, double amount)
{
	checks = (amount - balance) - 15.00;

	cout << "Enter the amount you would like to put on the check: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << checks << endl;
}

void Checking::Withdraw(double amount)
{
	balance = (balance - amount) - fee;
	// withdraw amount given including the $5 fee added onto transaction
}

void Checking::Deposit(double amount)
{
	balance = (balance + amount);
}

void Checking::Display()
{
	cout << "Enter account number: " << endl;
	cin >> acctNumber;
	cout << "==================================================" << endl;
	cout << "Account Number: " << acctNumber << endl;
	cout << "Account Type: " << acctType << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Interest Rate applied: " << interestRate << endl;
	cout << "==================================================" << endl;
}

