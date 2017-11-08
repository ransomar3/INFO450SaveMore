#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "CDAccount.h"
using namespace std;

CDAccount::CDAccount() : Account()
{
	term = 5;
	termRate = ((0.10/12) * balance);
}

void CDAccount::Withdraw(double amount)
{
	balance = balance - amount;
}

void CDAccount::Deposit(double amount)
{
	balance = balance + amount;
}

void CDAccount::Display()
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
