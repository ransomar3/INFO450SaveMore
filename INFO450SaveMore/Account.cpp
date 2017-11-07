#include "stdafx.h"
#include <string>
#include "Account.h"
using namespace std;

// default constructor
Account::Account()
{
	acctNumber = "";
	acctType = "";
	balance = 0;
	interestRate = 0;
}

Account::Account(string acctNo, string type, double blnc, int intRate)
{
	acctNumber = acctNo;
	acctType = type;
	balance = blnc;
	interestRate = intRate; 
}
