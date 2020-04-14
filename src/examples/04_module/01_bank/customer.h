//customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <vector>
#include<iostream>
#include "bank_account.h"
class Customer
{
public:

	void add_account(BankAccount& act);
	void display_accounts()const;
private:
	std::vector<BankAccount> accounts;
};
#endif // !CUSTOMER_H