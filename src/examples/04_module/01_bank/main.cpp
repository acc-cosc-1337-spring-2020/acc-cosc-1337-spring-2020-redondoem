#include "bank_account.h"
#include "savings_account.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout; using std::cin;

int main()
{
	SavingsAccount* s = new SavingsAccount(500);
	SavingsAccount s{ 90 }; 
	SavingsAccount s{ 90 };
	
	CheckingAccount checking{ 100 }; 
	CheckingAccount checking1{ 90 };

	std::vector<BankAccount> accounts{ s,c }; 

	/*std::vector<BankAccount> accounts{ BankAccount(100),
		BankAccount(200) };
	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}*/


	BankAccount account(500);
	cin >> account;
	cout << account;
	display_balance(account);

	auto balance = account.get_balance();
	cout << "Balance is: \n" << balance;

	auto amount{ 0 };
	cout << "\nEnter deposit amount: \n";
	cin >> amount;

	try
	{
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance();
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}

	return 0;
}