#include "bank_account.h"
#include<iostream>
#include<vector>
using std::cout; using std::cin;

int main()
{
	BankAccount a;
	cout << a.get_balance();
	/*std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) };*/
	BankAccount account(500); 
	cin >> account;
	cout << account;
	display_balance(account);

	auto balance = account.get_balance();
	cout << "Balance is: " << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	cin >> amount;
	try
	{
		account.deposit(amount);
		cout << "Balance is: " << account.get_balance;
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}
 	return 0;

}