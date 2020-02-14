#pragma once
#include "Account.h"
class Current :
	public Account
{
private:
	double overdraft = 100;
public:
	Current(double);
	double calculateInterest();
	double getBalance();
};

