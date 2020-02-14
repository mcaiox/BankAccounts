#include "Account.h"

using namespace std;
Account::Account(double balance){
	deposit(balance);
}

void Account::setInterest(double interestRate) {
	interest = interestRate;
}

double Account::getInterest(){
	return interest;
}

void Account::deposit(double amount) 
{
	if (amount >= 1.0)
		balance += amount;
	else
		throw invalid_argument("Account cannot be opened without a minimum deposit of £1.00");
	
}

void Account::withdraw(double amount) 
{
	balance -= amount;
}
double Account::getBalance() { return balance; }











