// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "CDAccount.h"
#include <iostream>
#include <string>
using namespace std;

// Functions to create new types of bank accounts
// Using polymorphism

int main()
{
	char answer;
	Account *aAcct = NULL;
	cout << "Welcome. What type of account do you want to create?\n" << endl;
	cout << "S --> Savings\n" << endl;
	cout << "C --> Checking\n" << endl;
	cout << "D --> Certificate of Deposit (CD)\n" << endl;
	cin >> answer;
	if (answer == 's' || answer == 'S')
	{
		Savings CreateAccount();

		// function to create new Savings
	}
	else if (answer == 'c' || answer == 'C')
	{
		Checking CreateAccount();

		// function to create new Checking
	}
	else if (answer == 'd' || answer == 'D')
	{
		CDAccount CreateAccount();

		// function to create new CD
	}
	aAcct->DisplayAccount();

	return 0;
}

