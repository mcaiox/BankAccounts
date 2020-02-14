#pragma once

#include <stdexcept>
class Account
{
private:
	double balance = 0;
	double interest = 0;
public:
	Account(double);
	void deposit(double);
	void withdraw(double);
	void setInterest(double);
	virtual double getBalance();
	double getInterest();
	virtual double calculateInterest()=0;


};

