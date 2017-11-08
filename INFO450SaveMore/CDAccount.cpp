#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "CDAccount.h"
using namespace std;

CDAccount::CDAccount() : Account()
{

}

void CDAccount::Withdraw()
{

}

void CDAccount::Deposit()
{

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
