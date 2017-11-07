#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"
using namespace std;

Savings::Savings(string acctNo, string type, double blnc, int intRate, int saveFee) : Account(acctNo, type, blnc, intRate)
{
	fee = saveFee;
}

int Savings::CalculateMonthlyInterest()
{
	return 0;
}

Savings::Savings() : Account()
{
	balance = 0;
}

void Savings::Display()
{
	cout << "Savings balance: " << endl;
	cout << "Savings interest rate: " << endl; 
}

void Savings::GetBalance()
{
	cout << "Enter account number: " << endl;
}