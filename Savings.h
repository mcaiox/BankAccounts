#pragma once
#include "Account.h"
class Savings :
	public Account
{
public:
	Savings(double);
	double calculateInterest();
};

