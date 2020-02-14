#include "Current.h"

Current::Current(double balance) : Account(balance){}

double Current::calculateInterest() {
	return getBalance() - (getBalance() * getInterest());
}

double Current::getBalance() {
	return getBalance() + overdraft;
}