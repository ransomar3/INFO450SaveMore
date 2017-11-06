#pragma once
#include "Account.h"
#include <string>
using namespace std;

class Checking : public Account
{
private:
	double chBalance;
	int fee;
public:
	Checking();
	Checking(string acctNo, double blnc, int intRate);
};
