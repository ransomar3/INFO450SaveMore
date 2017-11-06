#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Savings.h"
using namespace std;

Savings::Savings(string acctNo, double blnc, int intRate, int savAmt) : Account(acctNo, blnc, intRate)
{
	savBalance = savAmt;
}

Savings::Savings() : Account()
{
	savBalance = 0;
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