#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"
#include <iostream>
using namespace std;

Savings::Savings(string acctNo, double blnc) : Account(acctNo, blnc)
{
	fee = 2.00;
	balance = blnc;
}

void Savings::AssessInterest()
{
	if (balance <= 10000)
	{
		interestRate = ((0.01 / 12) * balance);
		balance = (interestRate + balance);
	}
	
	else if (balance >= 10000)
	{
		interestRate = ((0.02 / 12) * balance);
		balance = (interestRate + balance);
	}

	cout << "Your new balance is: " << balance << " after the transaction" << endl;
	return Display();
}

void Savings::Withdraw(double amount)
{
	balance = (balance - amount) - fee; 

	cout << "Enter the amount you'd like to withdraw: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << balance << endl;
}

void Savings::Deposit(double amount)
{
	balance = balance + amount;

	cout << "Enter the amount you'd like to deposit: " << endl;
	cin >> amount;
	cout << "Your new balance is: " << balance << endl;
}

void Savings::Display()
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

