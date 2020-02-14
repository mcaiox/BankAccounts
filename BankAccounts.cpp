// BankAccounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "Current.h"
#include "Savings.h"
using namespace std;

int main()
{
    Current ca(5000);
    Savings sa(5000);

    cout << sa.calculateInterest() << endl;
    
   
}

