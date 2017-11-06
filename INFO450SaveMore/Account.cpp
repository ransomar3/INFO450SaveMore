#include "stdafx.h"
#include <string>
#include "Account.h"
using namespace std;

// default constructor
Account::Account()
{
	acctNumber = "";
	balance = 0;
	interestRate = 0;
}

Account::Account(string acctNo, double blnc, int intRate)
{
	acctNumber = acctNo;
	balance = blnc;
	interestRate = intRate; 
}
