#include "Savings.h"

Savings::Savings(double balance) : Account(balance) {
	this->setInterest(0.005);
}

double Savings::calculateInterest() {
	return getBalance() - (getBalance() * getInterest());
}