//savings_account.h
#include "bank_account.h"

class SavingsAccount : public BankAccount

{
public:
	SavingsAccount() = default;
	SavingsAccount(int b) : BankAccount(b) {}

};